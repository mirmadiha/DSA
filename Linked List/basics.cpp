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
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for node with data: "<<value<<endl;
    }
};

void InsertAtHead(Node*&head,Node *temp){
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,Node *temp){
    tail->next=temp;
    tail=tail->next;
}

void insertInMiddle(int position,Node *NodeToInsert,Node* &head, Node* &tail){
    Node *temp=head;
    int count=1;
    if(position==1){
        InsertAtHead(head,NodeToInsert);
        return;
    }
    while(count<position-1 && temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,NodeToInsert);
    }
    else{
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
    }
}

void deleteNode(int position,Node* &head, Node* &tail){
    Node* previous=NULL;
    Node* crntNode=head;
    int count=1;
    if(position==1){
        Node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    while(count<position){
        previous=crntNode;
        crntNode=crntNode->next;
        count++;
    }
    if(crntNode->next==NULL){
        tail=previous;
    }
    previous->next=crntNode->next;
    crntNode->next=NULL;
    delete crntNode;
    }

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
    Node *middle=new Node(45);
    Node *node2=new Node(48);
    Node *node3=new Node(8);
    print(head);
    InsertAtTail(tail,node2);
    print(head);

    InsertAtHead(head,node3);
    print(head);

    insertInMiddle(4,middle,head,tail);

    print(head);

    deleteNode(4,head,tail);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    cout<<node2->next<<endl;
    return 0;
}