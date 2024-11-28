/*Write a program in C++ to to use the concepts of doubly linked list*/
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            delete prev;
            this->next=NULL;
            this->prev=NULL;
        }
        cout<<"Memory free for node with data: "<<value<<endl;
    }
};

//traversing a linked list
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//length at linkedlist
int getLength(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(int d,Node* &head,Node* &tail){
    if(head==NULL){
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void insertAtTail(int d,Node* &tail,Node* head){
    if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp; 
    }
}

void insertAtMiddle(int position,int d,Node* &head,Node* &tail){
    Node* nodeToInsert=new Node(d);
    if(position==1){
        insertAtHead(d,head,tail);
    }
    else{
    int count=1;
    Node* crntNode=head;
    Node* previous=NULL;
    while(count<position){
        crntNode=crntNode->next;
        count++;
    }
    if(crntNode->next==NULL){
        insertAtTail(d,tail,head);
    }
    else{
    previous=crntNode->prev;
    previous->next=nodeToInsert;
    nodeToInsert->prev=previous;
    nodeToInsert->next=crntNode;
    crntNode->prev=nodeToInsert;
    }
    }
}
void deleteNode(int position,Node* &head,Node* &tail){
    if(position==1){
        Node*temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    int count=1;
    Node*curr=head;
    Node*  prev=NULL;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(curr->next==NULL){
            tail=curr->prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        }
}

int main()
{
   Node* node1=new Node(10);
   Node *head=node1;
   Node *tail=node1;
   print(head); 
   int length=getLength(head);
   cout<<"length: "<<length<<endl;
   insertAtHead(12,head,tail);
   print(head);
   cout<<"head: "<<head->data<<endl;
   cout<<"tail: "<<tail->data<<endl;

   insertAtHead(13,head,tail);
   print(head);
   cout<<"head: "<<head->data<<endl;
   cout<<"tail: "<<tail->data<<endl;

   insertAtHead(8,head,tail);
   print(head);
   cout<<"head: "<<head->data<<endl;
   cout<<"tail: "<<tail->data<<endl;

   insertAtTail(88,tail,head);
   print(head);
   cout<<"head: "<<head->data<<endl;
   cout<<"tail: "<<tail->data<<endl;

   insertAtMiddle(1,40,head,tail);
   print(head);
   cout<<"head: "<<head->data<<endl;
   cout<<"tail: "<<tail->data<<endl;

   insertAtMiddle(6,78,head,tail);
   print(head);
   cout<<"head: "<<head->data<<endl;
   cout<<"tail: "<<tail->data<<endl;

   deleteNode(7,head,tail);
   print(head);

   cout<<"head: "<<head->data<<endl;
   cout<<"tail: "<<tail->data<<endl;
   return 0;
}