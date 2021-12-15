#include<iostream>
using namespace std;

class Test{
private:
    int a;
public:
    Test(int a){
        this->a=a;
    }
    void test(){
        cout<<"Test method"<<endl;
    }
    int getValue() const{ //This method can not change any variable.
       return this->a;    //And cannot call unconst function.  
    }    
};

void test(const Test &test){
    cout << test.getValue()<<endl;
}

int main(){
    Test test1(10);
    test(test1);
    cout<<test1.getValue()<<endl;


    return 0;
}