#include<iostream>
using namespace std;

void printArray(const int *ptr1,const int *ptr2){

    for(;ptr1!=ptr2;ptr1++){
        cout<<"Eleman: "<<*ptr1<<endl;
    }

}

/*
    Const Pointer'ın gösterdiği yer değişebilir Ancak Gösterdiği Adresteki Değer Değişmez.

    Where Const Pointer is pointing may change, but the Value at the Address It Displays Does Not Change.
    *ptr1=100; ==>This is an Error.
*/

int main(){
    int array[] = {10,20,30,40,50,60,70,80,90,100};
    printArray(array+2,array+7);

    return 0;
}