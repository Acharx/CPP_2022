#include<iostream>
using namespace std;

class Employee{
public:
    string *s;
    int *i;

    Employee(string str,int ivalue){
        s = new string;
        i = new int;

        *s=str;
        *i=ivalue;

    }
    void show(){
        cout<<"String Value : "<<*s<<" Int Value : "<<*i<<endl;
    }
    ~Employee(){
        delete s; //İf we don't do this,we delete object but,
        delete i; //Some memory leak occured.Because s and i also keep addres
                  //We need to delete them before delete object.    
        cout<<"Destructor is Called"<<endl;
    }
};

int main(){
    Employee *emp = new Employee("Mehmet",25);
    emp->show();


    return 0;
} 