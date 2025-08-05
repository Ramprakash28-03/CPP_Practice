#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};
static int idx = -1;
Node* insert(vector<int> &vec){
    idx++;
    if(vec[idx] == -1){
        return NULL;
    }
    Node * cur_node = new Node(vec[idx]);
    cur_node->left = insert(vec);
    cur_node->right = insert(vec);
    return cur_node;
}
void preOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node* root){
    if(root == NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(Node* root){
    if(root == NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL)
        q.push(curr->left);
        if(curr->right != NULL)
        q.push(curr->right);
    }
}
void levelOrder2(Node* root){
    if(root == NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* cur = q.front();
        q.pop();
        if(cur == NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            cout<<cur->data<<" ";
            if(cur->left != NULL){
                q.push(cur->left);
            }
            if(cur->right != NULL){
                q.push(cur->right);
            }
        }
    }
}
int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int left_count = count(root->left);
    int right_count = count(root->right);
    return left_count + right_count + 1;
}
int sum(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftS = sum(root->left);
    int rightS = sum(root->right);
    return leftS+rightS+root->data;
}
int sum2(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_sum = sum(root->left);
    int right_sum = sum(root->right);
    return left_sum + right_sum + root->data;
}
bool nodeToRoot(Node* root,int n,vector<int> &path){
    if(root == NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data == n){
        return true;
    }
    bool isLeft = nodeToRoot(root->left,n,path);
    bool isright = nodeToRoot(root->right,n,path);
    if(isLeft || isright){
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(Node* root, int n1,int n2){
    vector<int> path1;
    vector<int> path2;

    nodeToRoot(root,n1,path1);
    nodeToRoot(root,n2,path2);
    int lca = -1;
    for(int i=0,j=0; i<path1.size() && j<path2.size();i++,j++){
        if(path1[i] != path2[j]){
            return lca;
        }
        lca = path1[i];
    }
    return lca;
}
Node* LCAop(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* LCAleft = LCAop(root->left,n1,n2);
    Node* LCAright = LCAop(root->right,n1,n2);
    if(LCAleft != NULL && LCAright != NULL){
        return root;
    }
    return LCAleft == NULL ? LCAright : LCAleft;
}
int LCA2(Node* root,int n1,int n2){
    if(root == NULL){
        return -1;
    }
    if(root->data == n2){
        return n2;
    }
    if(root->data == n1) return n1;
    int leftData = LCA2(root->left,n1,n2);
    int rightData = LCA2(root->right,n1,n2);
    if(leftData != -1 && rightData != -1){
        return root->data;
    }
    return leftData == -1 ? rightData : leftData;
}
Node* LCA22(Node* root,int n1,int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* leftnode = LCA22(root->left,n1,n2);
    Node* rightnode = LCA22(root->right,n1,n2);
    if(leftnode != NULL && rightnode != NULL){
        return root;
    }
    return leftnode == NULL ? rightnode : leftnode;
}
 bool rootToNode(Node* root,int n,vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data == n){
        return true;
    }
    bool isLeft = rootToNode(root->left,n,path);
    bool isRight = rootToNode(root->right,n,path);
    if(isLeft || isRight){
        return true;
    }
    path.pop_back();
    return false;

}
int LCA20(Node* root,int n1,int n2){
   vector<int> path1;
   vector<int> path2;

   rootToNode(root,n1,path1);
   rootToNode(root,n2,path2);
   int ans = -1;
   for(int i=0,j=0; i<path1.size() && j<path2.size();i++,j++){
    if(path1[i] != path2[j]){
        return ans;
        break;
    }
    ans = path1[i];
   }
   return ans;

}
int minDistance(Node* root,int n1,int n2){
    vector<int> path1;
    vector<int> path2;

    rootToNode(root,n1,path1);
    rootToNode(root,n2,path2);
    int s1=0,s2=0;
    for(int i=0,j=0;i<path1.size() && j<path2.size();i++,j++){
        if(path1[i]!=path2[j]){
            s1=i;s2=j;
            break;
        }
    }
    int count=0;
    for(int i=s1;i<path1.size();i++){
            count++;
        }
        for(int j=s2;j<path2.size();j++){
            count++;
        }
        return count;
}
Node* lacop(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* leftn = lacop(root->left,n1,n2);
    Node* rightn= lacop(root->right,n1,n2);
    if(leftn != NULL && rightn != NULL){
        return root;
    }
    return leftn == NULL ? rightn : leftn;

}
int distance(Node* root,int n){
    if(root==NULL){
        return -1;
    }
    if(root->data == n){
        return 0;
    }
    int leftD = distance(root->left,n);
    if(leftD != -1){
        return leftD+1;
    }
    int rightD = distance(root->right,n);
    if(rightD != -1){
        return rightD+1;
    }
    return -1;
    
}
int minDistanceBtw2Nodes(Node* root,int n1,int n2){

    
    Node* lca = lacop(root,n1,n2);
    int dist1 = distance(lca,n1);
    int dist2 = distance(lca,n2);
    return dist1 + dist2;

    
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {1,2,3,4,5,-1,-1,-1,-1,-1,6,-1,7,-1,8,-1,9,-1,-1};
    vector<int> vec2={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
     Node* root = insert(vec2);
    int n1=5,n2=1;
    // cout<<minDistance(root,n1,n2);
    cout<<minDistanceBtw2Nodes(root,n1,n2);
    return 0;
}
