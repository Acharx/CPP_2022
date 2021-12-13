#include<iostream>
using namespace std;

class Employee{
    private :
        string name;
        int age=0;

    public:
        void setAge(int yas){
            if(yas>0){
                age=yas;
            }else if(yas<0){
                cout<<"HATALI DEGER"<<endl;
            }
        }
        int getAge(){
            return age;
        }
        void setName(string isim){
            name=isim;
        }
        string getName(){
            return name;
        }    
};

int main(){

    Employee* employee =new Employee();  //==> parantez ile yazılmalı,sebebi ilerde açıklanacak
                                        //hafizadan bir employee kadar yer tutuluyor
    employee->setName("mehmet");               //eğer pointer ile erişmeseydik ok değil nokta kullanırdık
    employee->setAge(21);

    cout<<employee->getName()<<endl;
    cout<<employee->getAge()<<endl;
    
    return 0;
}