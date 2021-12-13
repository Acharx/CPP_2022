#include<iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;

};

int main(){

    
Employee employee1 = {12,"Mustafa","Bilişim"};
//değerleri daha sonra da verebiliriz.
cout << employee1.name<<endl;

employee1.name="mustafa murat";

cout<<employee1.name<<endl;

    return 0;
}