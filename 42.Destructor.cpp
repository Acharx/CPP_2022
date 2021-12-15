#include<iostream>
using namespace std;

class Employee{
public:
    Employee(){
        cout<<"Constructor is Called"<<endl;
    }
    ~Employee(){
        cout<<"Destructor is Called"<<endl;
    }
};

int main(){
    Employee *emp=new Employee();//Allocate memory for one Employee clas size
    delete emp;


    return 0;
}