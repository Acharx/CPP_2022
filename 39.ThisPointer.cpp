#include<iostream>
using namespace std;

class Employee{

private:
    string name;
    int salary;
    int id;

public:
    Employee (string name,int salary,int id){  //Constructor Method
        this->name=name;        //If variable names are same,we use this pointer for indicate which is within class
        this->salary=salary;
        this->id = id;
    }

    void setSalary(int salary){
        this->salary=salary;
    }
    int getSalary(){
        return salary;
    }
    void setName(string isim){
        name=isim;
    }
    string getName(){
        return name;
    }

    void showInfos(){
        cout<<"Name   : "<<this->name<<endl;  //use have not to use here
        cout<<"Salary : "<<salary<<endl;      //your prefer  
        cout<<"ID     : "<<id<<endl;
    }

};

int main(){
    Employee employee("Mehmet",3000,123);
    employee.showInfos();

    return 0;
}