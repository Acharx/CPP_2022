#include<iostream>
using namespace std;

class Employee{

private:
    string name;
    int age;

public:
    void setAge(int yas){
        if(yas>=0){
            age=yas;
        }else if(yas<0){
            cout<<"You cannot assign this value for age"<<endl;
        }
        
    }
    int getAge(){
        return age;
    }
    void setName(string isim){
        name=isim;
    }
    string getName(){
        return name;
    }

};

int main(){
    Employee* employee = new Employee(); //We Allocate the memory for Employee

    employee->setName("Mehmet");
    employee->setAge(21);
    cout<<employee->getName()<<endl;
    cout<<employee->getAge()<<endl;
    
    return 0;
}