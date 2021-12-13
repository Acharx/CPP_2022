#include<iostream>

using namespace std;

void printMatris(int row,int col,int matris[] ){

}
//row yukardan aşağı  colums sağdan soğa artacak şekilde kabul ettim

int main(){
    //matrisin row ve column değerlerini input ile alma
    
    int first_row,first_col,sec_row,sec_col;
    cout << "Enter first row : ";
    cin>> first_row ;
    cout<<endl<<"Enter first col : ";
    cin>> first_col;
    cout<<endl<<"Enter second row : ";
    cin>> sec_row ;
    cout<<endl<<"Enter second col : ";
    cin>> sec_col ;

    int matris1[first_row][first_col];
    int matris2[sec_row][sec_col];



    //matrisin elemanlarını teker teker el ile girme
    for(int i=0;i<first_row;i++){
        for(int j=0;j<first_col;j++){
            cout << "1.matris" << i+1 <<".inci satır "<< j+1 <<".inci sütun :";
            cin >> matris1[i][j] ;
            cout << endl;
        }
    }
    for(int i=0;i<sec_row;i++){
        for(int j=0;j<sec_col;j++){
            cout << "2.matris" << i+1 <<".inci satır "<< j+1 <<".inci sütun :";
            cin >> matris2[i][j] ;
            cout << endl;
        }
    }
    ////////////////////////////Print
    for(int i=0;i<first_row;i++){
        for(int j=0;j<first_col;j++){
            
            cout << matris1[i][j] << " " ;
        
        }
        cout<<endl;
    }
    for(int i=0;i<sec_row;i++){
        for(int j=0;j<sec_col;j++){
            
            cout << matris2[i][j] << " ";
            
        }
        cout<<endl;
    }
    
    ////////////////////////Print Bitiş

    int toplam=0;
    //matris çarpımının sonucu
    if(first_col==sec_row){
        int resultmatris[first_row][sec_col];
        cout<< "first col :"<<first_col << "first row : "<<first_row << "sec col:" << sec_col << " sec rolw:"<<sec_row<<endl;
        for(int i=0;i<first_row;i++){
            for(int j=0;j<sec_col;j++){
                for(int k=0;k<first_col;k++){
                    toplam+=matris1[j][k]*matris2[k][i];
                }
                resultmatris[i][j]=toplam;
                toplam=0;        
            }
        }

        for(int a=0;a<first_row;a++){
            for(int b=0;b<sec_col;b++){
                cout<<resultmatris[a][b]<<" ";
            }
            cout<<endl;
        }



    }else{
        cout<<"Bu 2 matris çarpılamaz";
    }


    return 0;
}