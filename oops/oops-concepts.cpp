/*Write a program in C++ to use getter and setter function in oops*/
#include<iostream>
using namespace std;
class Hero{
    //private
    int health;
    char level;
    public:
    int energy;

    //creating constructor
    Hero(){
        cout<<"Constructor created successfully"<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }

    void setEnergy(int e){
        energy=e;
    }
};
int main()
{
   Hero peter;

   peter.setHealth(70);
   cout<<"Health="<<peter.getHealth()<<endl;

    peter.setEnergy(100);
   cout<<"Energy="<<peter.energy<<endl;

   peter.setLevel('F');
   cout<<"Level:"<<peter.getLevel()<<endl;

   //dynamically creating object
   Hero *parker=new Hero;
   (*parker).setHealth(50);
   (*parker).setLevel('K');
   (*parker).setEnergy(60);

   cout<<"Heallth :"<<(*parker).getHealth()<<endl;
   cout<<"Level:"<<(*parker).getLevel()<<endl;
   cout<<"Energy:"<<(*parker).energy<<endl;
}