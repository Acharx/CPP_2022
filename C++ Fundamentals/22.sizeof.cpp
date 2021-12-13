#include<iostream>
using namespace std;
/*sizeof operatörü bir veri yapısının bellekte ne kadar yer 
kapladığını görmemizi sağlayan operatördür.
*/

struct Student{
    int id;
    char letter;
};


int main(){
    int a=10;
    cout<<"integer: "<<sizeof(int)<<endl; //çıkan değer byte dir(8 bit)
    cout<<"integer: "<<sizeof(a)<<endl;
    cout<<"double: "<<sizeof(double)<<endl;
    cout<<"float: "<<sizeof(float)<<endl;
    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"student struct: "<<sizeof(Student)<<endl;
}   