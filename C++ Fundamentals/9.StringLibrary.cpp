#include<iostream>
#include<string.h>
using namespace std;


int main(){
    char name[30] = {'m','e','h','m','e','t','\0'};   //char karakter için ayrılan yer yetersiz olunca kod kafayı yiyor
    char surname[30] = {'a','c','a','r','\0'};
    char school[30]={'b','a','g','c','i','l','a','r','\0'};
    char bilgisayar1[20] = "lenovo";
    char bilgisayar2[20] = "Lenovo";
    char bilgisayar3[20] = "lenovO";
    string isim = "Mehmet";
    string soyisim = "Acar";
    
    
    cout<<name<<" 1 "<<surname<<endl;      //mehmet acar
    strcpy(name,surname);    //2.string'i 1.string'in içine kopyaladık
    cout<<name<<" 2 "<<surname<<endl;      //acar acar

    cout<<surname<<" 3 "<<school<<endl;     //acar bagcilar
    strcat(school,surname); //2.string ve 1.stringi birleştirip 1.string'in içine yazar
    cout<<surname<<" 4 "<<school<<endl;     //acar bagcilaracar

    cout<<"name string'inin uzunlugu : "<<strlen(name)<<"  icerik : "<<name<<endl;   //strlen string'inin uzunluğunu dönen fonksiyondur
    cout<<"surname string'inin uzunlugu :"<<strlen(surname)<<"  icerik : "<<surname<<endl;
    cout<<"school string'inin uzunlugu : "<<strlen(school)<<"  icerik : "<<school<<endl;

    if(0==strcmp(name,surname)){   //stringleri char by char şeklinde kıyaslar eşit ise return 0 döner
        cout<<"name : "<<name<<" surname : "<<surname<<endl;
        cout<<strcmp(name,surname)<<endl;
    }
    if(0!=strcmp(name,school)){     
        cout<<"name : "<<name<<" school : "<<school<<endl;
        cout<<strcmp(name,school)<<endl;
    }

    cout<<"COMPARE"<<endl;
    cout<<bilgisayar1<<" and "<<bilgisayar2<<" compare result is "<<strcmp(bilgisayar1,bilgisayar2)<<endl;
    cout<<bilgisayar2<<" and "<<bilgisayar1<<" compare result is "<<strcmp(bilgisayar2,bilgisayar1)<<endl;
    cout<<bilgisayar2<<" and "<<bilgisayar3<<" compare result is "<<strcmp(bilgisayar2,bilgisayar3)<<endl;
    cout<<bilgisayar1<<" and "<<bilgisayar3<<" compare result is "<<strcmp(bilgisayar1,bilgisayar3)<<endl;
    cout<<bilgisayar1<<" and "<<bilgisayar1<<" compare result is "<<strcmp(bilgisayar1,bilgisayar1)<<endl;

    /*
        burada şöyle bir yorum yapacağım sonuç kısmına bakılınca 6 adet kıyaslama var  Lenovo ve lenovO kıyaslamasında sonuç
        -1 çıktı sebebine gelecek olursak BENCE bu sistem char by char çalıştığı için öncelikle L ve l kıyaslandı ve L 'nin ascii
        değerinden ötürü birinciyi büyük okudu ve cevap -1 çıktı.
    */
   cout<<isim<<endl;
    

    return 0;
}

