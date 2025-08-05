#include<iostream>
#include<vector>
#include<climits>
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

class Info{
    public:
    bool isBST;
    int max;
    int min;
    int sz;
    Info(int max,int min,int sz,bool isBST){
        this->max = max;
        this->min = min;
        this->sz = sz;
        this->isBST = isBST;
    }
};

static int maxSize=0;

Info* largestBST(Node* root){
    if(root==NULL){
        return new Info(INT_MIN,INT_MAX,0,true);
    }

    Info* leftInfo = largestBST(root->left);
    Info* rightInfo = largestBST(root->right);

    int curSz = leftInfo->sz + rightInfo->sz + 1;
    int curmin = min(leftInfo->min,min(rightInfo->min,root->val));
    int curMax = max(root->val,max(leftInfo->max,rightInfo->max));

    if(leftInfo->isBST && rightInfo->isBST && leftInfo->max < root->val && rightInfo->min > root->val){
        maxSize = max(maxSize,curSz);
        return new Info(curMax,curmin,curSz,true);
    }

    return new Info(curMax,curmin,curSz,false);
}

void inOrder(Node* root){
    if(root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(25);
    root->left = new Node(11);
    root->left->left = new Node(10);
    root->left->right = new Node(6);

    root->right = new Node(30);
    root->right->right = new Node(45);
    root->right->left = new Node(24);
    root->right->left->right = new Node(26);
    root->right->right->left = new Node(35);
    root->right->right->right = new Node(60);
    largestBST(root);
    //inOrder(root);
    cout<<maxSize<<endl;
    return 0;
}


 
