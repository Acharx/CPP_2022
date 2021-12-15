#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4};
    int *ptr = array;
    int *ptr2 = &array[3];
    cout<<"The Address of First Element of Array "<<array<<endl;
    cout<<"The Address of First Element of Array "<<*ptr<<endl;

    cout<<"First Element of Array "<<*(ptr2-3)<<endl;
    cout<<"Second Element of Array "<<*(array+1)<<endl;
    cout<<"Third Element of Array "<<*(ptr+2)<<endl;
    cout<<"Last Element of Array "<<*(ptr2)<<endl;

    return 0;
}