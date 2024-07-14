/*Write a program in C++ to break an amount of Rs 1330 to Rs 100, Rs 50 Rs 20 Rs 1  notes*/
#include<iostream>
using namespace std;
int main()
{
    int amt= 1330;
    int note;
    cout<<"Enter the note(only in 100,50,20 and 1) :"<<" ";
    cin>>note;
    int result1=0;
    int result2=0;
    int result3=0;
    int result4=0;
    switch(note){
        case 100: result1=amt/100;
        cout<<"Rs 100 notes ="<<" "<<result1<<endl;
        amt=amt%100;
        case 50: result2=amt/50;
        cout<<"Rs 50 notes="<<" "<<result2<<endl;
        amt=amt%50; 
        case 20: result3=amt/20;
        cout<<"Rs 20 notes="<<" "<<result3<<endl;
        amt=amt%20;
          case 1: result4=amt/1;
        cout<<"Rs 1 notes="<<" "<<result4<<endl;
        amt=amt%1;
        break;
        default: cout<<"You entered the wrong notes"<<endl;
    }
}