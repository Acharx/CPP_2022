#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    int age;
    int salary;

public:
    Employee(string name,int age,int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    friend void showInfos(Employee employee);
};

//Normally, we cannot access private value from out of class
//If we define our function as a friend of class, we can access private value.
void showInfos(Employee employee){
    cout<<employee.name <<" "<<employee.age<<" "<<employee.salary<<endl;
}

int main(){
    Employee employee("Mehmet",35,4000);
    showInfos(employee);
    

 
    return 0;
}