#include<iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    Node* next;
    int data;
    Node(int val){
        prev = next = NULL;
        data = val;
    }
};
class doublyList{
    Node* head;
    Node* tail;
    public:
    doublyList(){
        head = tail =NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
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
    void print(){
        if(head == NULL){
            cout<<"This list is already empty";
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp= temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    doublyList D;
    D.push_front(10);
    D.push_front(20);
    D.push_front(110);
    D.push_back(3);
    D.push_back(2020);
    D.print();
    return 0;
}