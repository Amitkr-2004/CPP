#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,4,2,3,6,9,5,5};
    int n=8;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true)  break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}