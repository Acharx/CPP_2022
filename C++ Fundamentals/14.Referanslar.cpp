#include<iostream>
using namespace std;

void degerDegistir(int &ref){ //referansların pointerlara benzeyen kısmıdır
    ref = 20;
}

int main(){
/*
    pointerlera benziyor fakat bazı kullanım farkları var
    ilerleyen zamanlarda kullandıkça farkı anlaşılır
    anlamazsam kafaya takmam :)
*/

    int a=10;
    
    // baştaki ampersant (&) adres bilgi değildir.referans olduğunu söyler
    int &ref=a;

    int b=10;
 //   int &newref;  ==> bu kullanım bir hatadır.
 //   ref=b;

    ref++;
    cout<<"a nın yeni değeri"<<a<<endl;

    degerDegistir(a);
    cout<<"a nın yeni değeri : "<<a<<endl;

    return 0;
}