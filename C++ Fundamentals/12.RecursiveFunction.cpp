#include<iostream>
using namespace std;
//fibonacci ve faktoriyel

int factoriyel(int sayi){
    if(sayi==1)
        return 1;
    return sayi*factoriyel(sayi-1);
}

int fibonacci(int sayi){
    if(sayi<=1)
        return sayi;
    return fibonacci(sayi-1)+fibonacci(sayi-2);

    
}

int fibonacci(int sayi,bool unreal){
    if(sayi<=1 && unreal==true)
        return sayi+5;
    return fibonacci(sayi-1)+fibonacci(sayi-2);
}   

int main(){
    int a=factoriyel(5);
    cout<<a<<endl;
    int b=fibonacci(5);
    cout<<b<<endl;
    int c=fibonacci(5,true);
    cout<<c<<endl;
}