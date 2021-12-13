#include<iostream>
using namespace std;

int main(){
    int *ptr1 = nullptr;     //pointer herhangi bir yeri göstermiyor
                            //null değerini gösteriyor daha güvenli
    int *ptr2 = nullptr;
    ptr1 = new int; //bir tane int saklayan pointer
    *ptr1=10;
    ptr2=ptr1;
    delete ptr1;
    /*ptr1'i delete ettikten sonra 10 değeri kaybolur ve ptr1 geçersiz
    bir yeri göstermeye başlar. ama ptr2 de aynı yeri gösterdiği için
    o da geçersiz bir yeri göstermeye başlar
    */

//   *ptr=20;  ==>Bu da aynı şekilde danglingpointer
//   cout<<*ptr2<<endl; ==>runtime hatası verecek pc belleğinin kullandığı yere değer 
                        //==>atamaya çalıştığım için
   
//  delete ptr1;
//  *ptr1=10;          ==>c++ bize compailer değil runtime hatası verecek
//  cout<<*ptr1<<endl; ==^ bilgisayarın kullandığı yere değer atamaya çalışıyoruz
    
    /*
    delete işlemi yapıldıktan sonra pointer hala 10'un adresini gösteriyor
    ama o nokta artık belleğe verildi ve bellek kendine göre dolduruyor.
    yani pointer'ımız geçerli olmayan bir alana işaret ediyor.
    ==>Dangling Referans/Pointer (gösterdiği yerde geçerli bir obje olmayan referanslardır.)
    */



    return 0;
}