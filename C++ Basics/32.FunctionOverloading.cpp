#include<iostream>
using namespace std;

void Hello(){
    cout<<"Hello World!"<<endl;
};

void Hello(string name){
    cout<<"Hello "<<name<<endl;
};

void Hello(string name1,string name2){
    cout<<"Hello "<<name1<<" and Hello "<<name2<<endl;
};

int main(){
    Hello();
    Hello("Mehmet");
    Hello("Mehmet","Ali");
    return 0;
}