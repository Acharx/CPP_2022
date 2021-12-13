#include<iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;

};

int main(){

    
Employee employee1 = {12,"Mustafa","Bilişim"};

Employee* ptr=&employee1;

cout<<ptr->department<<endl;


    return 0;
}