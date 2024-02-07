#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    int arr[r][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cin>>arr[i][j];
        }
    }
    int temp=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i<=j){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            }
        }
    }
    cout<<"the transpose is "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}