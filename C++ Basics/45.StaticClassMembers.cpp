#include<iostream>
using namespace std;

class Gamer{
public:
    static int gamers; //Is class specific.Common to every object.
    Gamer(){
        gamers++;
        cout<<"New Gamer Created"<<endl;
    }
};

int Gamer::gamers=0;
//if we assign 0 value inside class,c++ give us error.

int main(){
    Gamer gamer1;
    Gamer gamer2;
    Gamer gamer3;
    Gamer gamer4;

    cout<<Gamer::gamers<<endl;

    return 0;
}