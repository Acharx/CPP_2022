#include<iostream>
using namespace std;

int main(){

    int a=5,b=6,c=7;
    bool TrueOrFalse=false;

    if( (a==5) || (b==5) ){
        cout<<"Either 'a' equal 5 OR 'b' equal 5,Maybe both of them equal 5"<<endl;
    }
    if( (b==6) && (c==7) ){
        cout<<"'b' is equal 6 AND 'c' equal 7"<<endl;
    }
    if( TrueOrFalse!=true){
        cout<<"Content of value is 0(FALSE)"<<endl;
    }

    if(a==6){
        //First Condition
    }else if(b==7){
        //Second Condition
    }else{
        //Third Condition
    }
    


}