#include<iostream>
using namespace std;

int getNumber(){
    return 5;
}

int add(int a, int b){
    return a + b;
}

int main(){
/*  cout<<getNumber();
    cout<<getNumber; //böyle yazarsak fonksiyonun adresine ulaşırız
*/
    int(*funcPtr)()= getNumber;
    cout<<funcPtr();

    int(*addPtr)(int,int)=add;
    //aynı fonksiyonu çağırmanın 2 farklı yolu var;
    cout<< add(2, 3) << endl;
    cout<< addPtr(3, 4) << endl;
    
    
    /*
    ASLINDA FONKSİYON POİNTER KULLANILMA SEBEBİ
    BİR FONKSİYON İÇİNDE FARKLI BİR FONKSİYON KULLANABİLMEKTİR.
    */

}