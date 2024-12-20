/*Write a program in C++ to show stack implementation without using STL*/
#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
        return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }
};
int main()
{
    Stack s(5);
    s.push(22);
    s.push(3);
    s.push(55);
    s.push(0);
    s.push(3);
    cout<<s.peek()<<endl;
    s.pop();
    if(s.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    cout<<s.peek()<<endl;
    s.push(7);
    s.print();
    s.push(12);
    if(s.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}