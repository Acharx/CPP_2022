#include<iostream>
using namespace std;

int main(){
    int WantedSalary,GivenSalary;
    GivenSalary=5000;

    cin>>WantedSalary;
    
    if(WantedSalary>GivenSalary){
        cout<<"You want too much salary"<<endl;
    }else if(WantedSalary==GivenSalary){
        cout<<"You're exactly our wanted personal"<<endl;
    }else{
        cout<<"You got the job"<<endl;
    }

    


}