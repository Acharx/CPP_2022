#include<iostream>
using namespace std;

class Employee{
    private :
        string name;
        int salary;

    public:
    Employee(string name,int salary){  //burdaki değişken ile içine atama yapacağımız değişkenin ismi aynı olursa
        this->name=name;                  //this pointer'ı kullanarak hanginin içine atayacağımızı gösterebiliriz.
        this->salary=salary;            //burda class'ın içindeki değeri vurguluyoruz (this kullanarak)
    }
        void setSalary(int salary){
            this->salary=salary;
        }
        int getSalary(){
            return salary;
        }

        void setName(string name){
            this->name=name;
        }
        string getName(){
            return name;
        }
        void showInfos(){
            cout<<"Isim: "<<this->name<<endl;                 //burada karışıklık çıkmaz ama yinede class içindeki değişkeni 
            cout<<"Maas: "<<this->salary<<endl;               //kullandığımızı vurgulamak için this kullanılabilir
        }    
};

int main(){
/*
    CONSTRUCTORLAR obje çalışırken oluşturulan özel metotlarımızdır.
    genellikle public olarak tanımlanır. Dizayn pattery konusunda private kullanılır ileri bir konudur.

*/

    Employee employee("mehmet",21);  //constractor sayesinde en başta değerleri tanımlamamızı sağlar
    employee.showInfos();
    
    return 0;
}