#include<iostream>
using namespace std;

int main(){

    cout<<"Hello World!"<<endl;
    
    float mySalary = 10000.123;
    float mySalaryMounth = mySalary/12;
    char character = 'a';
    char character2 = 'b';
    int WantedSalary=100;
    int YearsOfBirth = 2000;
    char gender = 'm';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 123141231;
    int intMax = INT_MAX;
    
    cout <<"Lutfen istediginiz meblayi giriniz"<<endl;
    //cin >> WantedSalary;
    if(WantedSalary>mySalaryMounth){
        cout<<"İstediğin Meblağ Çok Yüksek"<<endl;
    }else if(WantedSalary==mySalaryMounth){
        cout<<"İşe Alındın"<<endl;
    }else{
        cout<<"Tebrikler Ucuz İşçi"<<endl;
    }

    cout<<"Years Salary ="<<mySalary<<" Mouth Salary ="<<mySalaryMounth<<endl;
    cout<<"First Character = "<<character<<" Second Character = "<<character2<<endl;
    cout<<"size of int is "<<sizeof(int)<<endl;
    //-1,-2,-3,......-2147483648
    cout<<"Minimum value of int is"<<INT_MIN<<endl;
    //+1,+2,+3,......+2147483647 => İnclude 0 so that less than negative value as 1
    cout<<"Maximum value of int is "<<INT_MAX<<endl;
    cout<<"Size of unsigned int is "<<sizeof(unsigned int)<<"bytes"<<endl;
    cout<<"Maximum value of UInt is "<<UINT_MAX<<endl;
    cout<<"Max Value of int = "<<intMax<<endl;
    //overflow
    cout<<"Datatype overflow"<<intMax+1<<endl;
    cout<<"Selam Dostlarrrrr 444444"<<endl;
    //ASCII Table İşlemler
    cout<<(int)'a'<<endl<<int('a')<<endl<<int('A')<<endl<<char(65)<<endl;
    char c1,c2,c3,c4,c5;
    //cout<<"Enter 5 chars"<<endl;
    //cin>>c1>>c2>>c3>>c4>>c5;
    //cout<<"ASCII Message"<<int(c1)<<int(c2)<<int(c3)<<int(c4)<<int(c5)<<endl;
    //sizeof kullanım
    cout<<"Size of int ="<<sizeof(int)<<endl;
    cout<<"size of float ="<<sizeof(float)<<endl;
    cout<<"size of bool ="<<sizeof(bool)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    //operatörler
    cout<<5+2<<endl;
    cout<<5/2<<endl;
    cout<<int(5/2)<<endl;
    cout<<5%2<<endl;
    int counter =7;
    counter++;
    cout<<counter<<endl;
    counter--;
    cout<<counter<<endl;
    int counter2=5;
    cout<<(counter>counter2) <<" and "<<(counter<counter2)<<endl;
    counter=counter2;
    cout<<(counter !=counter2)<<" and "<<(counter==counter2)<<endl;
    bool loopvalue = true;
    int plq=0;
    while(loopvalue){
        plq++;
        if(plq==10){
            break;
        }
        cout<<plq<<endl;
    }   

    

    
    system("pause>0");
}
