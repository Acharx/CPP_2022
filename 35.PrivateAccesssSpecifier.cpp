#include<iostream>
using namespace std;

class Employee{
/*
if we defined our class as a private, we only access from within the class.
*/
private:
    string name;

public:
    void setName(string isim){
        name=isim;
    }
    string getName(){
        return name;
    }

};

int main(){
    Employee employee;
    employee.setName("Mehmet");
    cout<< employee.getName() <<endl;

    return 0;
}