#include<iostream>
using namespace std;

class Student{
    public:
        string name;


};


int main(){
    Student student1;
    Student student2;
    student1.name="Mehmet Ali";
    student2.name="Alii";
    
    cout<<student1.name<<endl;
    cout<<student2.name<<endl;



    return 0;
}