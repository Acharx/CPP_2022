
   #include<iostream>
using namespace std;

int Toplam_CallByValue(int a,int b){
    cout<<a+b<<endl;
    return a+b;
}

void YerDegistir_CallByValue(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    
}

void YerDegistir_CallByReference(int* a,int* b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


int main(){
    int x=5,y=6,z=7;
    int k=Toplam_CallByValue(x,y);
    cout<<k<<endl;

    cout<<"Call by Value Öncesi x : "<<x<<" y : "<<y<<" z : "<<z<<endl;
    YerDegistir_CallByValue(x,y);
    cout<<"Call by Value Sonrası x : "<<x<<" y : "<<y<<" z : "<<z<<endl;

    cout<<"Call by Reference Öncesi x : "<<x<<" y : "<<y<<" z : "<<z<<endl;
    YerDegistir_CallByReference(&x,&y);
    cout<<"Call by Reference Sonrası x : "<<x<<" y : "<<y<<" z : "<<z<<endl;
 


    return 0;
}
