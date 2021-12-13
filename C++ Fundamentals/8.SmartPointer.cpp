#include<iostream>
#include<memory>


using namespace std;

int main(){

    
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    //unique_ptr<int>unPtr2 = unPtr1; bu kullanım bir hatadır.
    cout<<"hello world"<<endl;
    cout << *unPtr1 << endl;

    system("pause>nul");
}