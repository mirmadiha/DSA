/*Write a program in C++ to */
#include<iostream>
using namespace std;
class Hero{
    int health;
    char level;
    public:

    int energy;

    //default constructor
    Hero(){
        cout<<"Simple constructor callled"<<endl;
    }

    //parameterised constructor
    Hero(int health){
        cout<<"address is:"<<this<<endl;
        health=health;
    }

    Hero(int health, char level){
        this->health=health;
        this->level=level;
    }

    //copy constructor
    Hero(Hero &temp){
        cout<<"coopy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<this->level<<endl;
        cout<<this->health<<endl;
    }
    void setEnergy(int enr){
        energy=enr;
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

    //destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    // Destructor is automatically called for static objects when they go out of scope.
    // For dynamic objects, destructor must be manually invoked using 'delete' to avoid memory leaks.

    //statically created
   Hero a;
   //dynamically created
   Hero *b=new Hero();
    delete b;  //now the destructor will be called in case of dynamically created objects

    
    
    
    
    
    
    
    
    
    //object created
    // Hero sam(70,'C');  
    //copy constructor called
    // Hero ron(sam);
    // ron.print();
    // Hero peter(100);
    // cout<<"address of Peter: "<< &peter <<endl;
    // peter.setHealth(80);
    // peter.setLevel('A');
    // peter.setEnergy(90);
    // cout<<"Health is:"<<peter.getHealth()<<endl;
    // cout<<"Level is:"<<peter.getLevel()<<endl;
    // cout<<"Energy is:"<<peter.energy<<endl;
    // peter.print();

    //dynamically creating an object

    // Hero *parker= new Hero(30,'B');
    // (*parker).setHealth(90);
    // (*parker).setLevel('C');
    // (*parker).setEnergy(50);
    // cout<<"Health is:"<<(*parker).getHealth()<<endl;
    // cout<<"Level is:"<<(*parker).getLevel()<<endl;
    // cout<<"Energy is:"<<(*parker).energy<<endl;
    // (*parker).print();


    // Hero temp(45,'Z');
    // temp.print();
}