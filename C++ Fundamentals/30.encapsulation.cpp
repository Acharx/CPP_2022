#include<iostream>
using namespace std;
/*
private tanımladıklarımıza sadece kendi tanımladığımız classın içinden
erişebiliyoruz.mainde erişemeyiz
*/
class Employee{
    private:
        string name;
        int age=0;
        
    public:
        void setAge(int yas){
            if(yas>=0){
                age=yas; 
            }else if(yas<0){
                cout<<"HATALI DEGER"<<endl;
            }
                           
        }
        int getAge(){
            return age;
        }
        void setName(string isim){ //==>dolaylı yoldan private erişim
            name=isim;          
        }
        string getName(){
            return name;
        }
           

};
/*  ÖRNEK:biz 4-5 kişilik bir ekipte çalışıyorz ve değişkenlerimiz herkese açık
adamin biri geldi ve age içine -4 değerini atadı.
herhangi bir kontrol mekanizması olmadığı için istediği gibi -4 atayabilecek
ve böylece istenmeyensonuçlar doğabilir.
fakat dolaylı yoldan çağırırsak, bir fonksiyon yazarak yaşın sıfırdan küçük
olamayacağını gösterebiliriz.
bunu ENCAPSULATİON ile yaparız
biz sadece kumandanın televizyonu açmasını biliriz.
iç yapısını bilmeyiz,eğer üretici bütün detayları paylaşırsa
yanlış birşey yapıp kumandayı bozabiliriz
*/

int main(){
    Employee employee;

    employee.setName("mehmet");
    employee.setAge(-4);
    cout<<employee.getName()<<endl;
    cout<<employee.getAge()<<endl;
    return 0;
}