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

Node* buildBst(vector<int> &arr,int st,int end){
    if(st > end ){
        return NULL;
    }
    int mid = st + (end-st)/2;
    Node* cur=new Node(arr[mid]);
    
    cur->left = buildBst(arr,st,mid-1);
    cur->right = buildBst(arr,mid+1,end);
    return cur;
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

Node* builtnode(Node* root,int val){
    if(root==NULL){
        root = new Node(val);
        return root;
    }
    if(val>root->val){
        root->right = builtnode(root->right,val);
    }else{
        root->left = builtnode(root->left,val);
    }
    return root;
}

Node* builtBi(vector<int> &arr){
    Node* root = new Node(arr[0]);
    for(int i=1;i<arr.size();i++){
        root = builtnode(root,arr[i]);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

int main(int argc, char const *argv[])
{
    vector<int> arr={2,5,6,7,8,9,10,11,15,16,17,18,19,20};
    Node* root = buildBst(arr,0,arr.size()-1);
    preOrder(root);
    cout<<endl<<arr.size();


    return 0;
}
