#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class LL{
    public:

    Node* head;
    Node* tail;
    
    LL(){
        head=tail=NULL;
    }

    void push_front(int data){
        Node* curNode= new Node(data);
        if(head==NULL){
            head=tail=curNode;
        }else{
            curNode->next=head;
            head=curNode;
        }
    }
    void printLL(Node* head){
        if(head == NULL){
            cout<<"The linked List is already empty : "<<endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
void reverseLL(Node* head){
    if(head == NULL){
        return ;
    }
    Node* temp = head;
    while(temp != NULL){
        temp = head->next;
    }
}
Node* reversee(Node* head){
    Node* prev = NULL;
    Node* cur  = head;
    Node* nxt = NULL;
    while(cur!=NULL){
        nxt=cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}
int main(int argc, char const *argv[])
{
    LL ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.printLL(ll.head);
    ll.printLL(reversee(ll.head));

    return 0;
}
