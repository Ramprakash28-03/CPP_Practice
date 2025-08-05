#include<iostream>
using namespace std;
template<class t>
class Node{
    public:
    t val;
    Node* next;
    Node(t data){
        val=data;
        next = NULL;
    }
};
template<class t>
class List{
    public:
    Node<t> *head = NULL;
    Node<t> *tail = NULL;
    void push_front(t data){
        Node<t> * newNode = new Node<t>(data);
        if(head==NULL){
            head=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void pop_front(){
        if(head==NULL){
            return
        }
        else{
            Node<t> *temp=head;
            head=head->next;
            delete temp;
        }
    }
    void print(){
        Node<t> *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
template<class t>
class Stack:public List<t>{
    public:
    void push(t val){
        push_front(val);
    }
    void pop(){
        pop_front();
    }
    bool isempty(){
        if(head == NULL)
        return true;
        return false;
    }
    t top(){
        return head->val;
    }
    
};
int main(int argc, char const *argv[])
{
    Stack<string> ll;
    ll.push("prakash");
    ll.push("Ram");
    ll.push("is");
    ll.push("name");
    ll.push("My");
    while(!ll.isempty()){
        cout<<ll.top();
        ll.pop();
    }

    return 0;
}
