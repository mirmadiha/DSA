/*Write a program in C++ to use the concepts of linked lists*/
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void InsertAtHead(Node*&head,int d){

    //new node created
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int data){
    Node *temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}

//traverse a linked list
void print(Node*&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *node1=new Node(10);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head=node1;
    Node *tail=node1;
    print(head);
    InsertAtTail(tail,3);
    // print(head);

    // InsertAtHead(head,66);
    // print(head);

    print(head);


    return 0;
}