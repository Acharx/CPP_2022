#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int size;
    cout<<"How many variable Will you keep ?";
    cin>>size;

    ptr = new int[size];

    for(int i=0;i<size;i++){
        cout<<"Değer:";
        cin>>ptr[i];
    }

    for(int i=0;i<size;i++){
        cout<<"Eleman : "<<ptr[i]<<endl;
    }

    delete [] ptr;
    //Its keep more than one integer size, so that we have to write [] before pointer name.
    

    return 0;
}