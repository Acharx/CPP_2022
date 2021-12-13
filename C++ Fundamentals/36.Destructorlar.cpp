#include<iostream>

using namespace std;
//Destructor için ALT GR+Ü basmalıyız ~~ tilda işareti vericek
class Employee{
    public:
        Employee(){ //constuctor
            cout<<"Constuctor çağrıldı"<<endl;
        }
        ~Employee(){ //destructor, constructor ile aynı isme sahip başındaki işaret ile birlikte kullanılrı
            cout<<"Destructor çağrıldı"<<endl;
        }   
};
//constructorlar , objeler oluşturulduğunda c++ tarafından
//otomatiktan çağrılır
int main(){
//destructorlar objemizi bellekten sildiğimiz zaman çağrılan metotdur

    Employee *emp = new Employee();  //bu classtan obje oluşturdulk
    delete emp;
//delete ile işimiz biten objeyi temizleyebilriz. bellek gerksiz kullanımı engeller
//biz silmedikçe c++ müdahale etmez
    return 0;
}