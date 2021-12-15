#include<iostream>
using namespace std;

int main(){
    int *ptr = nullptr; //Safer Start
                        //pointing a null pointer instead of pointing anywhere

    ptr = new int;

    *ptr = 10;
    
    delete ptr;  //Dangling Reference
                 //are references that do not have a valid object where they point

    *ptr=10;     // We are trying to assign a value to a place that the computer uses.

//  cout<<*ptr<<endl;  //Not Compailer error, Runtime Error

    /*
        ptr ==> 10
        10 is deleted
        ptr ==> ??
    */



    return 0;
}