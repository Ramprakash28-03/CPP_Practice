#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data=val;
        next = NULL;
    }
    ~Node(){
        if(next != NULL){
            delete next ;
            next = NULL;
        }
    }

};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        Node* temp=head;
        if(head == NULL ){
            head = newNode;
            return ;
        }
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = newNode;
        tail=newNode;
    }
    void print(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
    };
class MergeSort{
   List merge(Node* left,Node* right){
    Node* i=left;
    Node* j=right;
    List ans;
    while(i != NULL && j != NULL){
        if(i->data>=j->data){
            ans.push_back(j->data);
            j=j->next;
        }else {
            ans.push_back(i->data);
            i=i->next;
        }
    }
    while(i!=NULL){
        ans.push_back(i->data);
        i=i->next;
    } 
    while(j!=NULL){
        ans.push_back(j->data);
        j=j->next;
    }
    return ans;
    }
    Node* splitNode(Node* head){
        Node* slow=head;
        Node* fast=head;
        Node* prev=NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev != NULL){
            prev->next=NULL;
        }
        return slow->next;
    }
    List mergeSort(Node* head){
        
        Node* right = splitNode(head);
        mergeSort(head);
        mergeSort(right);
        return merge(head,right);

    }
};

int main(int argc, char const *argv[])
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.print();
    
    return 0;
}
