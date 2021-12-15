#include<iostream>
using namespace std;

//Dangling Reference One More Example

int main(){
    int *ptr1=nullptr;
    int *ptr2=nullptr;

    ptr1 = new int;
    *ptr1=10;

    ptr2=ptr1;  //ptr1 and ptr2 point to the same location.

    delete ptr1;

    //ptr1 and ptr2 dangling reference
    
    /*

    *ptr2=20;
    cou<<*ptr2<<endl;

    */
   
    return 0;
}