#include<iostream>
using namespace std;

int main(){
    int *ptr = new int;  //Allocate one integer size
    *ptr=5;
    
    delete ptr; //Deallocate size
    //Important for prevent unnecessary memory usage.
     

    return 0;
}