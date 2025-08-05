#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    Node *prev;
    int data;
    Node(int val){
        data=val;
        prev = next = NULL;
    }
};
class doublyList{
    Node* head;
    Node* tail;
    public:
    doublyList(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
           tail = head = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout<<"list is already NULL";
        }
        Node* temp = head;
        head = head->next;

        if(head != NULL){
            temp->next = NULL;
            head->prev = NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(tail == NULL){
            cout<<"the linked list is already empty";
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL){
            temp->prev = NULL;
            tail->next = NULL;
            delete temp;
        }
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    doublyList Dll;
    Dll.push_front(10);
    Dll.push_front(20);
    Dll.push_front(30);
    Dll.push_front(40);
    Dll.push_back(4);
    Dll.pop_front();
    Dll.pop_back();
    Dll.pop_back();
    Dll.push_back(200);
    Dll.print();
    return 0;
}