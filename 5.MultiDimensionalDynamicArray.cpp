//codebeauty youtube
#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<< "rows,cols:";
    cin >> rows >> cols;

    int**table=new int*[rows];    
    for(int i=0;i<rows;i++){
        table[i]=new int[cols];   
    } 
    
    table[1][2] = 88;

    //son allocate olan yer ilk deallocate olandır.

    for(int i=0;i<rows;i++){
        delete[] table[i];
    }
    delete[] table;
    table==NULL;
}