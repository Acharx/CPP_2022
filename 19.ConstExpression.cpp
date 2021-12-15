#include<iostream>
using namespace std;

int main(){
    //We cannot change it later.
    const int i=45;
    const int a[]={10,20,30,40,50};
    // a[2]=100; ==>This is a Error

    cout<<i<<endl;
    // i=55; ==>This is a Error
    return 0;
}