#include<iostream>
using namespace std;

class Employee{
 
private:
    string name;
    int salary;
    int id;

public:
    Employee(){ //If we do not generate default costructor , c++ generate it itself.
        this->name="No Information";
        this->salary=0;
        this->id=0;
    }

    Employee(string name,int salary){   //Constructor Overloading
        this->name=name;
        this->salary=salary;
        this->id=12;
    }

    Employee (string name,int salary,int id){  
        this->name=name;        
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
    Employee employee2("Ali",6500);
    Employee employee3; // we do not add () when call empty cumstructor.
    employee.showInfos();
    employee2.showInfos();
    employee3.showInfos();

    return 0;
}