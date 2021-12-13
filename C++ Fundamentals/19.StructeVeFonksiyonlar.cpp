#include<iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;
};
void show(Employee* employee){  //pointer olarak gönderme
    employee->id=30; //callbyreferance olduğundan değer değişir
    cout <<"Id: "<<employee->id << endl;
    cout<<"İsim: "<<employee->name<<endl;
    cout<<"Departmant: "<<employee->department<<endl;
}

void showEmployee(Employee employee){ //struct olarak gönderme
    /*obje uzerinde bir değişiklik yapmıyoruz
    değerini kopyalıyoruz.
    */
    employee.id=40; //callbyvalue olduğundan değer değişmez
    cout <<"Id: "<<employee.id << endl;
    cout<<"İsim: "<<employee.name<<endl;
    cout<<"Departmant: "<<employee.department<<endl;
}

int main(){
    Employee employee1 = {12,"Mehmet Açar","Bilişim"};
    showEmployee(employee1);
    show(&employee1);
    return 0;

}