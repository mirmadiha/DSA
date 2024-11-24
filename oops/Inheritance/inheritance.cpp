/*Write a program in C++ to use the concept of encapsulation in oops*/
#include<iostream>
using namespace std;

class Human{
    public:
       string name; 
       int age;
       int height;

        void setName(string pronoun){
          this->name=pronoun;
       }  
       void setAge(int number){
          this->age=number;
       } 
       void setHeight(int cm){
          this->height=cm;
       }   
};

class Male: private Human{  //Male class inherits the properties and functions of the Human class
    
    public:
      string color;
      void setColor(string shade ){
          this->color=shade;
       }  
      void strength(){
        cout<<"The male is very strong"<<endl;
      }
    int getHeight(){
        return this->height;
    }
    void setHeight(int number){
        this->height=number;
    }
};

int main()
{
    Human Object1;
    Object1.setName("Khaibar");
    Object1.setAge(18);
    Object1.setHeight(190);
    cout<<"name:"<<Object1.name<<endl;
    cout<<"age:"<<Object1.age<<endl;
    cout<<"height:"<<Object1.height<<endl;

    Male Object2;
    Object2.setHeight(180);
    cout<<"height:"<<Object2.getHeight()<<endl;
    Object2.strength();
    return 0;
}