#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={5,3,1,4,2};
    int n=5;
    for(int i=0;i<n-1;i++){
        int val=arr[i];
        int idx=-1;
        for(int j=i+1;j<n;j++){
            if(val>arr[j]){
                val=arr[j];
                idx=j;
            }
        }
        if(arr[i]>arr[idx])
        swap(arr[i],arr[idx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}