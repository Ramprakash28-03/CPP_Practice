#include <iostream>
#include<algorithm>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }

};
class list{
    Node* tail;
    Node* head;
    public :
    list(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return ;
        }
        else
        { newNode->next = head;
            head = newNode;
            cout<<newNode;

        }

    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL ){
            head = tail = newNode;
            return ;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_back(){
        if(head == NULL){
            cout<<"LL is already empty\n";
            return ;
        }
        Node* temp = head; 
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void pop_front(){
        if(head == NULL){
            cout<<"LL is already Null " ;
            return ;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void printLL(){
        Node* temp = head;
        while( temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main() {
    list ll;
    ll.push_front(10);
    ll.push_front(9);
    ll.push_front(8);
    ll.push_back(11);
    //ll.pop_front();
    ll.printLL();
    return 0;
}