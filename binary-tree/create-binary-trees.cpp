#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

Node* createNode(int val){
    Node* newNode = new Node();
    newNode->data = val ;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* createBinaryTree(){
    int val;
    cout<<"Enter the value of the node (-1 for no node): ";
    cin>>val;

    if(val == -1){
        return NULL;
    }

    Node* root = createNode(val);
    cout<<"Enter the left child of "<<val<<": ";
    root->left = createBinaryTree();
    cout<<"Enter the right child of "<<val<<": ";
    root->right = createBinaryTree();
    return root;
}

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if (root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

vector<vector<int>> levelOrderTraversal(Node* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;

    queue<Node*> q;
    vector<int> level;

    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* node = q.front();
            q.pop();
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}
    

int main(){
    Node* root = createBinaryTree();

    cout<<"Preorder Traversal: ";
    preorderTraversal(root);
    cout<<endl;

    cout<<"Inorder Traversal: ";
    inorderTraversal(root);
    cout<<endl;

    cout<<"Postorder Traversal: ";
    postorderTraversal(root);
    cout<<endl;

    cout<<"Level Order Traversal: ";
    vector<vector<int>> levelOrder = levelOrderTraversal(root);
    for(int i=0;i<levelOrder.size();i++){
        for(int j=0;j<levelOrder[i].size();j++){
            cout<<levelOrder[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}