#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cin>>arr[i][j];
        }
    }
    int temp=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i<=j){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            }
        }
    }
for(int i=r-1;i>=0;i--){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}  
}