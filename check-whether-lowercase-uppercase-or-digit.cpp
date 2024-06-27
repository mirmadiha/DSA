#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"ENTER INPUT = "<<endl;
    cin>>a;
    if(a>='a'&&a<='z'){
        cout<<"It is LOWERCASE"<<endl;
    }
    else if(a>='A'&&a<='Z'){
        cout<<"It is UPPERCASE"<<endl;
    }
    else if(a>='0'&&a<='9'){
        cout<<"It is a DIGIT"<<endl;
    }
    else{
        cout<<"It is a SPECIAL CHARACTER"<<endl;
    }
}