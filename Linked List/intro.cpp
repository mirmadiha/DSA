/*Write a program in C++ to use conceots of Linked Lists*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &head ,int d){
    //new node create
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int main()
{
    //cretaed new node
    Node *node1=new Node(45);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;

    //head pointed to node1

    Node* head =node1;

    print(head);

    InsertAtHead(head,12);

    print(head);

    return 0;
}