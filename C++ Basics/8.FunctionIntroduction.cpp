#include<iostream>
using namespace std;

//Function With Parameters
void factorial(int count){
    int fact = 1;
    for (int i=2; i <=count;i++){
        fact *=i;
    }
    cout<<"Factorial:"<<fact<<endl;
}

//Pre Defined Function
void hello(){
    cout<<"Hello World"<<endl;
}

//Post Defined Function
void MyNameIs();

int main(){

    hello();
    MyNameIs();
    factorial(3);
    factorial(4);
    factorial(6);
    
}

//Definition of Post Defined Function
void MyNameIs(){
    cout<<"My name is Mehmet"<<endl;
}