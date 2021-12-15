#include<iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

void showEmployee(Employee employee){
    
    employee.id=30;  //CallByValue

    cout<<"ID         :"<<employee.id<<endl;
    cout<<"Name       :"<<employee.name<<endl;
    cout<<"Departmant :"<<employee.department<<endl;

}

void showEmployeeWithPtr(Employee* employee){

    employee->id=30;    //CallByReference

    cout<<"ID         :"<<employee->id<<endl;
    cout<<"Name       :"<<employee->name<<endl;
    cout<<"Departmant :"<<employee->department<<endl;
}

int main(){
    Employee employee1 = {112,"Mehmet","Electronic"};
    showEmployee(employee1);
    cout<<employee1.id<<" As you show,after callbyvalue,id still name"<<endl;
    
    cout<<"----------"<<endl;
    
    showEmployeeWithPtr(&employee1);
    cout<<employee1.id<<" As you show,after callbyrefence,id was changed"<<endl;
    return 0;
}