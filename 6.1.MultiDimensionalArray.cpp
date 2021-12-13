#include<iostream>
using namespace std;

int main(){
    int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    float number[3][3];

    cout<<matris[0][0]<<endl;
    cout<<matris[1][1]<<endl;
    cout<<matris[2][2]<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matris[i][j];
        }
        cout<<"\n";
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            number[i][j]=i+j;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<number[i][j];
        }
        cout<<"\n";
    }


}