#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
    ~Node(){
        cout<<"The dustructor value is : "<<data<<endl;
        if(next != NULL){
            delete next;
            next=NULL;
        }
    }
};
class List{
    Node *head;
    Node *tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    ~List(){
        if(head != NULL){
            delete head;
            head=NULL;
        }
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else {
            newNode->next = head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void insert(int val,int position){
        Node* newNode = new Node(val);
        Node* temp = head ;
        for(int i=0;i<position-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void pop_front(){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        Node* temp=head;
        if(head == NULL){
            cout<<"List is already NULL\n";
            return ;
        }
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    int searchItr(int val){
        Node* temp=head;
        int i=0;
        while(temp->data != val && temp->next !=NULL){
            i++;
            temp=temp->next;
        }
        if(temp->data == val){
            return i;
        }else return -1;
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void reverseLL(){
        // besically we have taken 3 nodes i.e prev,cur,next then we point next(node) to the cur->next then cur->next jo hai wo PREV ko point karega after that prev=cur and cur=next; (yaha pe next hai wo ek naya node hai)
        Node* cur=head;
        tail=head;
        Node* prev=NULL;
        while(cur!=NULL){
            Node* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;

    }
    int  helper(int key,Node* hd){
        if(hd==NULL){
            return -1;
        }
        if(hd->data == key){
            return 0;
        }
        int idx=helper(key,hd->next);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }
    int  searchRecursive(int key){
       return helper(key,head);
    }
    int sz(){
        int count=0;
        Node* temp;
        while(temp !=NULL){
            temp = temp->next;
            count++;
        }
        return count;

    }
    void removeNthNodeFromEnd(int idx){
        int gsize=sz();
        Node* tempp = head;
        for(int i=1;i<(gsize-idx);i++){
            tempp=tempp->next;
        }
        Node* todel = tempp->next;
        cout<<"Going to delete : "<<tempp->data<<endl;
        tempp->next = tempp->next->next;
    }
};
int main()
{
    List L;
    L.push_front(3);
    L.push_front(2);
    L.push_front(1);
    L.push_back(4);
    L.print();
    L.insert(25,2);
    cout<<L.searchItr(1)<<endl;
    L.print();
    L.reverseLL();
    L.print();
    cout<<L.searchRecursive(3)<<endl;
    cout<<L.sz()<<endl;
    L.removeNthNodeFromEnd(2);
    L.print();

    return 0;
}
