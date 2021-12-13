#include<iostream>
using namespace std;

class Employee{
    private :
        string name;
        int salary;

    public:
    Employee(string isim,int maas){  // constructorlar class ismi ile aynı olacak şekilde tanımlanır.
        name=isim;
        salary=maas;
    }
        void setSalary(int maas){
            salary=maas;
        }
        int getSalary(){
            return salary;
        }

        void setName(string isim){
            name=isim;
        }
        string getName(){
            return name;
        }
        void showInfos(){
            cout<<"Isim: "<<name<<endl;
            cout<<"Maas: "<<salary<<endl;
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