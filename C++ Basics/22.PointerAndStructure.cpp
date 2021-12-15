#include<iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

int main(){
    Employee employee1 = {112,"Mehmet","Electronic"};
    Employee* ptr =&employee1;

    cout<<employee1.name<<endl;
    cout<<ptr->name<<endl;

    return 0;
}