#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int size;

    cout<<"kaç değer saklayacaksınız ?";
    cin>>size;
    ptr =new int [size];
    for(int i=0;i<size;i++){
        cout<<"değer:";
        cin>>ptr[i];
    }
    for(int i=0;i<size;i++){
        cout<<"Eleman: "<<ptr[i]<<endl;
    }
    delete[] ptr;  //deallocate ediyoruz belleği boşaltıyoruz
    return 0;
}