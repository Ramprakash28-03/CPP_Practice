#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void Inorder(Node* root,vector<int> &nodes){
    if(root==NULL){
        return ;
    }
    Inorder(root->left,nodes);
    nodes.push_back(root->val);
    Inorder(root->right,nodes);
}
Node* builtBalanceTree(int st,int end,vector<int> &vec){
    if(st>end){
        return NULL;
    }
    int mid = st + (end-st)/2;
    Node* cur = new Node(vec[mid]);

    cur->left =  builtBalanceTree(st,mid-1,vec);
    cur->right = builtBalanceTree(mid+1,end,vec);
    return cur;
}

Node* balanceTree(Node* root){
    if(root == NULL) return NULL;
    vector<int> nodes;
    Inorder(root,nodes);
    return builtBalanceTree(0,nodes.size()-1,nodes);
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(7);
    root->right = new Node(11);
    root->right->left = new Node(12);
    root->left->left->left = new Node(6);
    root->right->right = new Node(16);
    root = balanceTree(root);
    preOrder(root);
    return 0;
}
