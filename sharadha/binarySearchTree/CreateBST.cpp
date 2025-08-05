// #include<iostream>
// #include<vector>
// using namespace std;
// class Node
// {
// private:
//     /* data */
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };
// Node* insert(int val,Node*root){
//     if(root==NULL){
//         root = new Node(val);
//         return root;
//     }
//     if(val<root->data){
//         root->left=insert(val,root->left);
//     }else{
//         root->right=insert(val,root->right);
//     }
//     return root;
// }

// Node* builtBst(vector<int> &val){
//     Node* root=NULL;
//      for(int i=0;i<val.size();i++){
//        root= insert(val[i],root);
//      }
//      return root;
// }
// void inOrder(Node*root){
//     if(root==NULL){
//         return ;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }
// bool searchInBST(Node*root,int val){
//     if(root==NULL){
//         return false;
//     }
//     if(root->data == val){
//         return true;
//     }
//     if(root->data<val){
//         return searchInBST(root->right,val);
//     }
//     if(root->data>val){
//         return searchInBST(root->left,val);
//     }
// }
// Node* inOrderSuccessor(Node* root){
//     while(root->left != NULL){
//         root=root->left;
//     }
//     return root;
// }
// Node* deleteBst(Node* root,int val){
//     if(root==NULL){
//         return NULL;
//     }
//     if(val<root->data){
//         root->left = deleteBst(root->left,val);
//     }
//     else if(val>root->data){
//         root->right = deleteBst(root->right,val);
//     }
//     else{
//         if(root->left ==NULL && root->right == NULL){
//             delete root;
//             return root;
//         }
//         else if(root->left ==NULL || root->right == NULL){
//             return root->left == NULL ? root->right : root->left;
//         }
//         Node* IS = inOrderSuccessor(root->right);
//         root->data = IS->data;
//         root->right = deleteBst(root->right,IS->data);
//         return root;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     vector<int> arr={1,5,8,2,4,6,22,11,15};
//     Node* root = builtBst(arr);
//     inOrder(root);
//     deleteBst(root,11);
//     cout<<endl;inOrder(root);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data ;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

Node* insert(int val,Node* root){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(val<root->data){
        root->left = insert(val,root->left);
    }else{
        root->right = insert(val,root->right);
    }
    return root;
}

Node* BuiltTree(vector<int> &arr){
    Node* root = NULL;
    for(int i=0;i<arr.size();i++){
        root = insert(arr[i],root);
    }
    return root;
}
void printPath(vector<int> path){
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

void helper(Node* root,vector<int> &path){
    if(root == NULL){
        return ;
    }
    path.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        printPath(path);
        path.pop_back();
        return;
    }

    helper(root->left,path);
    helper(root->right,path);
    //path.pop_back();
}

void rootToLeaf(Node* root){
    vector<int> path;
    helper(root,path);
}


void inOrder(Node* root){
    if(root == NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

Node* dltNode(Node* root,int val){
    if(root==NULL){
        return NULL;
    }

    if(val<root->data){
        root->left = dltNode(root->left,val);
    }else if(val>root->data){
        root->right = dltNode(root->right,val);
    }else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            return root;
        }else if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right : root->left;
        }else{
            Node* ios = root;
        }
    }
}
void printRange(Node* root,int st,int end){
    if(root==NULL){
        return ;
    }
    if(st<=root->data && root->data <=end){
        printRange(root->left,st,end);
        cout<<root->data<<" ";
        printRange(root->right,st,end);
    }else if(root->data<st){
        printRange(root->right,st,end);
    }else if(root->data>end){
        printRange(root->left,st,end);
    }
}

bool helperv(Node* root,Node* min,Node* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data < min->data){
        return false;
    }
    if(max!=NULL && root->data > max->data){
        return false;
    }
    helperv(root->left,min,root) && helperv(root->right,root,max);
}

bool validiate(Node* root){
    return helperv(root,NULL,NULL);
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,532,6,4,23,11,101,10,111,12,13,14,5,97};
    Node * root = BuiltTree(arr);
    //inOrder(root);
    // printRange(root,11,100);
    // cout<<endl;
    // rootToLeaf(root);
   cout<< validiate(root);
    return 0;
}
