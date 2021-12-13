/*
    pointerları genellikle objelerimizi tekrar tekrar
    kopyalamayalım. ve sadece adres üzerinden erişelim diye
    kullanıyoruz

*/

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

void deneme(Employee emp){ //CallByValue, yeni bir obje oluşturup birebir içine kopyaladık
    emp.showInfos();
}

void denemePtr(Employee* ptr){
    ptr->showInfos();
}

int main(){
    Employee employee("mehmet",3000,12); 
    deneme(employee);
    /*
    burada deneme fonksiyonunu oluşturduk ve callbyvalue ile birlikte
    aslında bellekte bir tane daha obje oluşturduk ve verileri birebir kopyaladık
    bu kadar basit bir işlem için bile bellekte fazladan yer tuttuk
    bir programda en çok uğraştıran yoran iş objeyi oluşturmaktır
    dikkat bu örnekteki az fonksiyon ve veri var fakat çok büyük bir veri
    olduğu düşündüğümüzde bu çok zahmetli ve zaman alan olacaktır
    */ 
   denemePtr(&employee);
   /*
    Böyle yaparak sadece adres bilgisini hafızada tuttuk
    bir veriyi tutmak için sıfırdan obje oluşturmak yerine bunu 
    yapmak hem zaman hem bellek açısından çok çok karlıdır.
    100 byte dosya yerine 4byte adres bilgisi gibi :)
   */

    return 0;
}