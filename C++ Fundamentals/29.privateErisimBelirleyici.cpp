#include<iostream>
using namespace std;
/*
private tanımladıklarımıza sadece kendi tanımladığımız classın içinden
erişebiliyoruz.mainde erişemeyiz
*/
class Employee{
    private:
        string name;
        
    public:
        void setName(string isim){ //==>dolaylı yoldan private erişim
            name=isim;          
        }
        string getName(){
            return name;
        }
           

};


int main(){
    Employee employee;

    employee.setName("mehmet");
    /*  biz public bir dosyaya isim gönderiyoruz, public , bizim dosyamızın içinde olduğundan
    ordanda private'a erişebiliyoruz
    */
   cout<<employee.getName()<<endl;

    return 0;
}