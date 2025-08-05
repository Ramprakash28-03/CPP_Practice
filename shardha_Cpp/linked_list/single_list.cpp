#include<iostream>
using namespace std;
class Node{
    public:
    Node* next ;
    int data;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        tail = newNode;
    }
    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            cout<<"list is already empty";
            return;
        }
        Node* prevv = head;
        while(prevv->next != tail){
            prevv = prevv->next;
        }
        prevv->next = NULL;
        delete tail;
        tail = prevv;

    }
    void insertIdx(int count,int val){
        Node* newNode = new Node(val);
        Node* temp = head;
        Node* back = head;
        if(head == NULL && count==0){
            head = tail = newNode;
        }
        else{
            for(int i=1 ; i<count; i++){
                temp = temp->next;
                back = back->next;
            }
            newNode->next = back->next;
            temp->next = newNode;
        }

    }
    void print(){
        if(head == NULL){
            cout<<"This list already empty";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    List L;
    L.push_front(10);
    L.push_front(30);
    L.push_front(0);
    L.push_back(110);
    L.insertIdx(4,38);
    L.print();
    L.pop_back();
    L.print();
    return 0;
}