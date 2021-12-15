#include<iostream>
using namespace std;

void Test(){
    static int i=3; //variable is created one time. 
    i++;
    cout<<" value of i : "<<i<<endl;
}
/*
Normally,if we call a function, variable of function is generated
after function is worked.
Last,variable is deleted.
But if variable is static, is not delete, its wait until end of the program.
*/

int main(){
    Test();     //i=4
    Test();     //i=5
    Test();     //i=6
    return 0;
}