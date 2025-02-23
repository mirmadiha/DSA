/*Write a program in C++ to create a binary tree*/
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;

        node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};

node* buildTree(node* root){
    cout<<"Enter data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"Enter data to insert on left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data to insert on right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

void inorderTraversal(node* root){
    if(root==NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right); 
}

void preOrderTraversal(node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
    if(root==NULL){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root=NULL;
    root=buildTree(root);
    levelOrderTraversal(root);
    cout<<"Inorder Traversal:"<<" ";
    inorderTraversal(root);

    cout<<endl;

    cout<<"Preorder Traversal:"<<" ";
    preOrderTraversal(root);

    cout<<endl;

    cout<<"Postorder Traversal:"<<" ";
    postOrderTraversal(root);

    return 0;

}