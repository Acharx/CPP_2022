#include<iostream>
using namespace std;

int main(){
    int a[50];
    int b[]={1,2,3,4,5,6,7,8,9};
    char c[]={'h','e','l','l','o'};

    //Assign i values into a array
    for(int i=0;i<50;i++){
        a[i]=i;
    }

    for(int i=0;i<10;i++){
        cout<<b[i];
    }
    
    cout<<"\n";
    
    for(int i=0;i<5;i++){
    cout<<c[i];    
    }

    cout<<"\n";
    
    //Writing Content of a array
    for(int i=0;i<50;i++){
        cout<<a[i]<<endl;
    }



}