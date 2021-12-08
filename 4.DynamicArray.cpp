#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Size: ";
    cin>>size;
    //int myArray[size];
    int* myArray=new int[size]; //allocate the memory

    for(int i=0;i<size;i++){
        cout<<"Array["<< i <<"] ";
        cin>>myArray[i];
    }
    for(int i=0;i<size;i++){
        //cout<< myArray[i]<<" "; //same way
        cout<< *(myArray+i)<<" ";
    }

    delete[]myArray;  //deallocate the memory
    myArray = NULL; //myarray'in null göstermesini sağlayıp herhangi bir 
                //problem olmasını engelliyoruz
                
    
}