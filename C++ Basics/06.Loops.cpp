#include<iostream>
using namespace std;

int main(){
    
    int a=5;

    for(int i=0;i<10;i++){
        cout<<i<<endl;
    }


    while(a<25){
        cout<<a<<endl;
        a++;
    }
    
    //Nested Loops
    cout<<"\nNested Loops"<<endl;
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<j;
        }
        cout<<"\n";
    }

    //Break And Continue Expression
    cout<<"\nBrean And Continue Expression"<<endl;

    int x=4;
    while(x<100){
        cout<<x<<endl;
        if(x==10){
            break;
        }
        x++;
    }

    cout<<"\nWriting Even Numbers from 0 to 50"<<endl;

    //Writing Even Numbers from 0 to 50
    int count;
    for(count=0;count<=50;count++){
        if(count%2==0){
            cout<<count<<endl;
        }
        if(count%2==1){
            continue;
        }
    }

    
    //Infitine Loops
    /*
    for(;;){
        cout<<"Hello World"<<endl;
    }
    while(true){
        cout<<"Hello World"<<endl;
    }
    */

}