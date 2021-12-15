#include<iostream>
using namespace std;

int main(){
    int process;

    cout<<"Enter the process you want";
    cin>>process;

    switch(process){
        case 1:
            cout<<"You Preferred 1. process"<<endl;
            break;
        case 2:
            cout<<"You Preferred 2. process"<<endl;
            break;
        case 3:
            cout<<"You Preferred 3. process"<<endl;
            break;
        default:
            cout<<"You Preferred default process"<<endl;
            break;        
    
    }

}