#include<iostream>

using namespace std;

class Employee{
    public:

        string *s;
        int *i;

        Employee(string str,int ivalue){
            s = new string; //s için bellekte yer ayırıyoruz
            i = new int;
            
            *s = str;
            *i = ivalue;

        }
        void show(){
            cout<<"String değer: "<< *s <<" Int değer:"<< *i << endl;
        }
        ~Employee(){
            delete s;  //aşağıda bahsettiğim bellek sızıntısını engellemek için
            delete i;
            cout<<"destructor çağrıldı"<<endl;
        }

};
/*
Video link;
https://www.youtube.com/watch?v=AUbINK0oavo&list=PLIHume2cwmHfmSmNlxXw1j9ZAKzYyiQAq&index=48
*/
int main(){
    Employee *emp = new Employee("mehmet",25);
    emp->show();
    delete emp;
    /*
    BELLEK SIZINTISI

        biz emp için bellekte yer ayırdık onun içindeki s ve i
        içinde bellekte başka yerler ayırdık.biz emp yi sildiğimiz zaman
        s ve i yi siliyoruz fakat s ve i'nin tuttuğu yerleri(bunlar ponter unutma)
        belleğe geri vermiyoruz buda bellek sızıntısı oluyor


    */
}