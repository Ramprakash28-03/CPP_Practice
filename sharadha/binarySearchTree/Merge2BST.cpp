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

Node* create(Node* root,int a){
    if(root == NULL){
        root = new Node(a);
        return root;
    }
    if(a < root->val){
       root->left = create(root->left,a);
    }else{
        root->right = create(root->right,a);
    }
    return root;
}

Node* insert(vector<int> arr){
    Node* root = NULL;
    for(int i=0;i<arr.size();i++){
        root = create(root,arr[i]);
    }
    return root;
}

void inOrderTra(Node* root){
    if(root==NULL){
        return ;
    }
    inOrderTra(root->left);
    cout<<root->val<<" ";
    inOrderTra(root->right);
}

void inOrder(vector<int> &vec,Node* root){
    if(root==NULL){
        return;
    }
    inOrder(vec,root->left);
    vec.push_back(root->val);
    inOrder(vec,root->right);

}

vector<int> merge(vector<int> vec1,vector<int> vec2){
    vector<int> ans;
    int i=0,j=0;
    while(i<vec1.size() && j<vec2.size()){
        if(vec1[i]<=vec2[j]){
            ans.push_back(vec1[i]);
            i++;
        }else{
            ans.push_back(vec2[j]);
            j++;
        }
    }
    while(i<vec1.size()){
        ans.push_back(vec1[i]);
        i++;
    }

    while(j<vec2.size()){
        ans.push_back(vec1[j]);
        j++;
    }
    return ans;
}

Node* BSTmerge(Node* root1,Node* root2){
    vector<int> vec1,vec2;
    inOrder(vec1,root1);
    inOrder(vec2,root2);
    vector<int> ans = merge(vec1,vec2);
    Node* mer=insert(ans);
    return mer;
}

int main(int argc, char const *argv[])
{
    vector<int> arr={1,58,12,3,53,59,29,93,10,11};
    vector<int> arr2{2,4,6,5,14,17,41,84};
    Node* root2 = insert(arr2);
    Node* root1 = insert(arr);
    // inOrderTra(root);
    // cout<<endl;
    // inOrderTra(root2);
    Node * ans = BSTmerge(root1,root2);
    inOrderTra(ans);


    return 0;
}

