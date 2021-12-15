#include<iostream>

using namespace std;

int main(){
    int a=5;

    int *ptr = &a;

    cout<<"Address of Variable : "<<&a<<endl;
    cout<<"Address of Variable : "<<ptr<<endl;
    cout<<"Content of Variable : "<<*ptr<<endl;
    *ptr=6;
    cout<<"New Content of Variable : "<<*ptr<<endl;
    

    return 0;
}   