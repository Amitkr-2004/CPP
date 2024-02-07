#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    if(r2==c1){
    int arr1[r1][c1];
    cout<<"Enter First Array"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[r2][c2];
    cout<<"Enter Second Array"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    } 
    int mul[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mul[i][j]=0;
            for(int k=0;k<r2;k++){
                mul[i][j]+=arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout<<"The multiplicated matrix is : "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"Multiplication is not allowed";
    }
}