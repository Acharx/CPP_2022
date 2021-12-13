#include<iostream>
using namespace std;

int main(){
    //Integers
    int a = 100;
    int b = 200;

    //Fractional Numbers
    float c = 100.1;
    float d = 200.2;

    double e = 500.5;
    double f = 600.6;

    //Char
    char firstLetter = 'x';
    char secondLetter = 'y';

    //Logical
    bool isGreen = true;
    bool isBlue = false;

    //Capacity of the variable
    int intMax = INT_MAX;
    int intMin = INT_MIN;

    //Print on screen
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"Value of c is "<<c<<endl;
    cout<<"Value of d is "<<d<<endl;
    cout<<"Value of e is "<<e<<endl;
    cout<<"Value of f is "<<f<<endl;
    cout<<"Content of firstLetter is "<<firstLetter<<endl;
    cout<<"Content of secondLetter is "<<secondLetter<<endl;
    cout<<"Content of isGreen is "<<isGreen<<endl;
    cout<<"Content of isBlue is "<<isBlue<<endl;
    cout<<"Maximum value of Int Can be "<<intMax<<endl;
    cout<<"Minimum value of Int Can be "<<intMin<<endl;

    //operators
    cout<<"a+b is equal to "<<a+b<<endl;
    cout<<"a-b is equal to "<<a-b<<endl;
    cout<<"a*b is equal to "<<a*b<<endl;
    cout<<"a/b is equal to "<<a/b<<endl;
    cout<<"(float)a/(float)b is equal to "<<(float)a/(float)b<<endl;
    cout<<"a%b is equal to "<<a%b<<endl;

    system("pause>0");
}