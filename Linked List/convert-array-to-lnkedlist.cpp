#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* node1){
        data=data1;
        next=node1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArrayToLinkedList(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* curr=new Node(arr[i]);
        prev->next=curr;
        prev=curr;
    }
    return head;
}

int main () {
    vector<int>arr={2,6,4,64,5,3};
    Node* result=convertArrayToLinkedList(arr);
    Node* temp= result;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
