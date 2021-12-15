#include<iostream>
using namespace std;

struct Student {
    int id;
    char letter;

};

//An operator that indicates how much memory a data structure occupies.

int main(){
    cout<<"Integer : "<<sizeof(int)<<endl;
    cout<<"Float   : "<<sizeof(float)<<endl;
    cout<<"Char    : "<<sizeof(char)<<endl;
    cout<<"Double  : "<<sizeof(double)<<endl;
    cout<<"Bool    : "<<sizeof(bool)<<endl;
    cout<<"Student : "<<sizeof(Student)<<endl;

}