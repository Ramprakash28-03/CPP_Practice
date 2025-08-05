#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left ;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node* insert(vector<int> &arr){
    idx++;
    if(arr[idx] == -1){
        return NULL;
    }

    Node* curNode = new Node(arr[idx]);
    curNode->left = insert(arr);
    curNode->right = insert(arr);
    return curNode;
}

void inOrder(Node* root){
    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
}

void levelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* cur = q.front();
         q.pop();
        cout<<cur->data<<" ";
        if(cur->left != NULL){
            q.push(cur->left);
        }
        if(cur->right != NULL){
            q.push(cur->right);
        }
    }
}

void lineOrder(Node* root){
    if(root == NULL){
        return ;
    }
    
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {7,14,1,-1,2,-1,3,-1,4,-1,5,-1,8,-1,11,-1,-1,-1,55,57,-1,-1,-1};
    Node* root = insert(arr);
    levelOrder(root);
    return 0;
}
