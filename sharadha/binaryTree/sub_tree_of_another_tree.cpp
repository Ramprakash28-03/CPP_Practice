#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Node{
    int data;
    Node* left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

