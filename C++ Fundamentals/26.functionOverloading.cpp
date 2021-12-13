#include<iostream>
using namespace std;

void selamla(){
    cout<<"merhaba"<<endl;
}
void selamla(string name){
    cout<<"merhaba"<<name<<endl;
}
void selamla(string name1,string name2){
    cout<<"merhaba"<<name1<<" , "<<name2<<endl;
}

int main(){
    selamla();
    selamla("mehmet");
    selamla("mehmet","ali");
}