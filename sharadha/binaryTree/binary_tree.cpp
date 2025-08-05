#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

static int idx=-1;
Node* insertNode(vector<int> &nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* curr_node= new Node(nodes[idx]);
    curr_node->left = insertNode(nodes);
    curr_node->right = insertNode(nodes);
    return curr_node;
}

void preorder(Node* root){
        if(root==NULL){
            cout<<-1<<" ";
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    //left
    Inorder(root->left);
    //root
    cout<<root->data<<" ";
    //right
    Inorder(root->right);
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node *curr=Q.front();
        Q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right !=NULL){
            Q.push(curr->right);
        }
    }
}
void levelLineTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        Node *curr=Q.front();
        Q.pop();
        if(curr == NULL){
            cout<<endl;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        }else{
            cout<<curr->data<<" ";
        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right !=NULL){
            Q.push(curr->right);
        }
        }
    }
}
int height(Node* root){
    if(root==NULL){
          return 0;
    }
    int lft=height(root->left);
    int rt=height(root->right);
    return max(lft,rt)+1;
}
int count(Node*root){
    if(root==NULL){
        return 0;
    }
    int lf=count(root->left);
    int rt=count(root->right);
    return lf+rt+1;
}
int sumOfNodes(Node*root){
    if(root==NULL){
        return 0;
    }
    int lf=sumOfNodes(root->left);
    int rt=sumOfNodes(root->right);
    return lf+rt+root->data;
}
int diameter(Node*root){
    if(root==NULL){
        return 0;
    }
    int cur_dia=height(root->left)+height(root->right)+1;
    int lf = diameter(root->left);
    int rt = diameter(root->right);
    return max(lf,max(rt,cur_dia));
}
pair <int,int> heightDiameter(Node*root){
    if(root==NULL){
        return make_pair(0,0);
    }
    pair<int,int> leftInfo= heightDiameter(root->left);
    pair<int,int> rightInfo = heightDiameter(root->right);
    
    int cur_dia = leftInfo.first + rightInfo.first + 1;
     int finalDia = max(cur_dia,max(leftInfo.second,rightInfo.second));
    int finalHt = max(leftInfo.first,rightInfo.first)+1;
    return make_pair(finalHt,finalDia);
}

void preOrderTraversing(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversing(root->left);
    preOrderTraversing(root->right);
}
void inOrderTraversing(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversing(root->left);
    cout<<root->data<<" ";
    inOrderTraversing(root->right);

}
void postOrderTraversing(Node* root){
    if(root==NULL){
        return ;
    }
    postOrderTraversing(root->left);
    postOrderTraversing(root->right);
    cout<<root->data<<" ";
}
void level(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right !=NULL){
            q.push(curr->right);
        }
    }
}
void levelLine(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            cout<<curr->data<<" ";
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
int transform(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftOld = transform(((*root).left));
    int rightOld = transform((root)->right);
    int curval = root->data;

    root->data = leftOld + rightOld ;
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
    return curval;
    
}
int main(int argc, char const *argv[])
{
    vector<int> vec={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> vec2={1,2,4,-1,-1,5,-1,6,-1,7,8,9,-1,-1,-1,-1,3,-1,-1};
    Node* root = insertNode (vec2);
    //preorder(root);
    //cout<<"Root is : "<<root->data<<endl;
    // postOrder(root);
    //levelLineTraversal(root);
    // cout<<height(root)<<endl;
    // cout<<count(root)<<endl;
    // cout<<sumOfNodes(root)<<endl;
    // cout<<diameter(root)<<endl;
    // cout<<heightDiameter(root).first<<" "<<heightDiameter(root).second<<endl;
   // transform(root);
    levelLine(root);
    return 0;
}
