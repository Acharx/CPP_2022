#include<iostream>

using namespace std;

int main(){
    string parola = "123456";
    string input;

    do{
        cout<<"Parolanızı Girin:";
        cin>>input;
        if(input!=parola){
            cout<<"Password is Wrong"<<endl;
        }
    }while(input!=parola);

    return 0;
}