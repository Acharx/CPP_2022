#include<iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

int main(){
    Employee employee1 = {112,"Mehmet","Electronic"};
    Employee employee2;
    cout<<employee1.name<<endl;     
    employee1.id=113;
    cout<<employee1.id<<endl;

    employee2.name="Murat";
    employee2.id=114;
    employee2.department="Seller";

    return 0;
}