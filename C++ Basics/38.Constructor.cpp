#include<iostream>
using namespace std;

class Employee{

private:
    string name;
    int salary;
    int id;

public:
    Employee (string isim,int maas,int kimlik){  //Constructor Method
        name=isim;
        salary=maas;
        id = kimlik;
    }

    void setSalary(int maas){
        salary=maas;
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
        cout<<"Name   : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"ID     : "<<id<<endl;
    }

};

int main(){
    Employee employee("Mehmet",3000,123);
    employee.showInfos();

    return 0;
}