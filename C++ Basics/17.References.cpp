#include<iostream>
using namespace std;

void changeValue(int &ref){
    ref = 20;
}

int main(){
    int a=10;
/*
    int &ref;   Declared as Reference but not initialized.
    ref=a;
*/

/*
    int *ptr;   This works.
    ptr = &a;
*/

    // & Sign indicates that is a reference,not an address.
    int &ref = a; 
    ref++;
    cout<<"New Value of a : "<<a<<endl;

    changeValue(a);  //Its look like CallByReference

    cout<<"New Value of a : "<<a<<endl;

    return 0;
}