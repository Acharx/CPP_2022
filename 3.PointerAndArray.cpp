#include<iostream>

using namespace std;

int getMin(int numbers[],int size){
    int min=numbers[0];
    for(int i=1;i<size;i++){
        if(numbers[i]<min){
            min=numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[],int size){
    int max=numbers[0];
    for(int i=1;i<size;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[],int size,int*min,int*max){
    for(int i=1;i<size;i++){
        if(numbers[i]>*max)
            *max=numbers[i];
        if(numbers[i]<*min)
            *min=numbers[i];    
    }
}

int main(){
    
    
    //Multiple return with pointers
    /*
    int numbers[5]={5,4,-2,29,6};
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers,5,&min,&max);
    cout<<"min is "<<min<<endl;
    cout<<"max is "<<max<<endl;

    cout<<"Min is "<<getMin(numbers,5)<<endl;
    cout<<"Max is "<<getMax(numbers,5)<<endl;
    /*

    //pointerlara giriş
    /*
    int luckyNumber[5]={2,3,5,7,9};
    int selectedNumber[5];
    cout<<luckyNumber<<endl;  //arrayın ilk elemanının adresini gösterir
    cout<<&luckyNumber[0]<<endl;
    cout<<luckyNumber+1<<endl;
    cout<<*(luckyNumber+1)<<endl;
    cout<<luckyNumber[4]<<endl;
    
    
    for(int i=0;i<5;i++){
        cout<<i+1<<".ninci sayiyi giriniz:";
        cin>>selectedNumber[i];
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<selectedNumber[i]<<"  "<<*(selectedNumber+i)<<endl;
    }

    
    
    */
}