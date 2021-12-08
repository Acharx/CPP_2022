#include<iostream>
using namespace std;

int main(){
    
    for(int i=0;i<10;i++){
        cout<<i<<" ";
    }
    
    cout<<"\n";
    
    int x=0;
    
    for(;x<10;x++){
        cout<<x<<" ";
    }

    cout<<"\n"<<endl;
    
    int count=0;
    bool isGreaterThan25=false;
    while(!isGreaterThan25){
        cout<<"Value of this Variable is "<<count<<endl;
        count++;
        if(count>25){
            isGreaterThan25=true;
        }
    }



}