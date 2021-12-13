#include<iostream>
using namespace std;

void printNumber(int* numberPtr){
    cout<<*numberPtr<<endl;
}

void printLetter(char* charPtr){
    cout<<*charPtr<<endl;
}

void print(void* ptr,char type){
    switch(type){
        case 'i':cout<<*((int*)ptr)<<endl; break;
        case 'c':cout<<*((char*)ptr)<<endl; break;
    }
}

int main(){
    int n=5;
    cout<<&n<<endl;
    int* ptr=&n;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=10;
    cout<<*ptr<<endl;
    cout<<n<<endl;
    
    //normal şartlarda ptr2 pointerine bir değişken atamamak hatadır(visual studio) ama vscode hata vermedi.
    int v;
    int* ptr2=&v;
    *ptr2=7;
    cout<<"v="<<v<<endl;
    int number = 5;
    printNumber(&number);
    char firstCharMyName='m';
    printLetter(&firstCharMyName);
    print(&number,'i');
    print(&firstCharMyName,'c');
}