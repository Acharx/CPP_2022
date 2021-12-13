#include<iostream>

using namespace std;
/*
STATİK DEĞİŞKENLER: BELLEKTE YALNIZCA BİR DEFA OLUŞTURULURLAR 
VE SADECE O İSİMLE BİR TANE DEĞİŞKEN OLUŞTURURLAR
*/
/*
STATİK DEĞİŞKENLER PROGRAM KAPANINCA SİLİNİR
VOİD TEST İÇİNDE TANIMLADĞIMIZ GİBİ FONKSİYON İŞİ
BİTİNCE DEĞİŞKENDE SİLİNMEZ
*/
void test(){
    int i=3;
    i++;
    cout<<"i'nin değeri"<<i<<endl;
}
void statictest(){
    static int x=3;
    x++;
    cout<<"x'in değeri"<<x<<endl;
}

int main(){
    test(); 
    //bu fonksyion kullanılıp işi bittikten sonra 
    //içinde tanımlanan değişkenlerde silinir
    //şimdi eğer cout diyip i'Yi yazdıkmak istersem hat alırım
    test();
    test();
    //cevabın sürekli 4 olması bunun bir ispatıdır.

    statictest();
    statictest();
    statictest();
    /*
    burada static int x=3 bir kere tanımlandığı için fonksiyonu
    2. 3. çağırdığımızda sistem daha önce böyle bir değişken tanımlandığını
    gördüğü için tekrardan değişken tanımlamıyor
    böylece değişken içindeki değer aynı kalıyor.
    */
    return 0;
}