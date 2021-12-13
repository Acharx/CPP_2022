#include<iostream>
using namespace std;

struct adres{
    string cityname;
    int no;
};

struct Empoloyee{
    int id;
    string name;
    string department;
    adres *adres;  //bir önceki (20.)den farklı olarak pointer barındırıyor
};

int main(){
    Empoloyee employee;
    employee.id=12;
    employee.name="mehmet açar";
    employee.department="bilişim";
    adres adres={"istanbul",5};
    employee.adres=&adres;
    
    Empoloyee* ptr = &employee;

    cout<<ptr->adres->cityname<<endl;
    cout<<ptr->adres->no<<endl;

    return 0;
}