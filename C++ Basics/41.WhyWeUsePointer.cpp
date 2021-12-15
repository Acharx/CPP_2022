#include<iostream>
using namespace std;

class Employee{
 
private:
    string name;
    int salary;
    int id;

public:
    Employee(){ 
        this->name="No Information";
        this->salary=0;
        this->id=0;
    }

    Employee(string name,int salary){  
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

void deneme(Employee emp){      //CallByValue
    emp.showInfos();
    cout<<"CallBuValue,Copy of All Content\n";            //We copy content of class,its mean more memory allocation
}

void denemePtr(Employee *ptr){  
    ptr->showInfos();
    cout<<"CallByReference,Copy of Address\n"; 
}                                 
                                //CallByReference
                                //We only copy content of address,maybe we have over 100 byte data for class,
                                //we allocate memory only for pointer, its less than class size.
                                //For example:  Class size:100  Adress size:4
                                //CallByValue Copy Content     100   100  =>Use more Memory
                                //CallByReference  Copy Adress 100   4    =>Use less Memory

int main(){
    Employee employee("Mustafa Murat",3000,12);
    deneme(employee);
    denemePtr(&employee);

    return 0;
}