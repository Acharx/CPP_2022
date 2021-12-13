#include<iostream>
using namespace std;

class Employee{
    private :
        string name;
        int salary;
        int id;

    public:
    
    Employee(){
        this->name="Bilgi yok";
        this->salary=0;
        this->id=0;
    }

    Employee(string name,int salary){  //constructor overloading, aynı constracti tekrar tanımlayıp farklı parametre ile çalıştırmaktır
                                        //fonksiyon overloading ile aynı mantığa sahiptir.
        this->name=name;
        this->salary=salary;
        this->id=0;

    }

    Employee(string name,int salary,int id){
        this->name=name;              
        this->salary=salary;            
        this->id=id;
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
            cout<<"Id: "<<this->id<<endl;
        }    
};

int main(){


    Employee employee1("mehmet",21,24);
    Employee employee2("ali",234); 
    Employee employee3;  //içi boş constructor çağırıkten parantezler yazılmaz c++ hata verir.
    employee1.showInfos();
    employee2.showInfos();
    employee3.showInfos();


    /*
        ÖNEMLİ:
        eğer biz bütün constracturları silsek veya yorum satırı içine alsak,employee1 ve employee2 bize hata verir fakat
        employee1 hata vermez çünkü C++ kendi içinde bir constructor tanımlamıştır.
    */
    return 0;
}