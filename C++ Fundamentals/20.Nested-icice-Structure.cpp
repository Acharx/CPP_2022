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
    adres adres;
};

int main(){
    Empoloyee employee = {12,"Mehmet Açar","Bilişim",{"istanbul",5}};
    employee.adres.no=234;
    employee.adres.cityname="tokat";
    
    cout<<employee.id<<endl;
    cout<<employee.name<<endl;
    cout<<employee.department<<endl;
    cout<<employee.adres.cityname<<endl;
    cout<<employee.adres.no<<endl;


    return 0;
}