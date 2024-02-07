#include<iostream>
using namespace std;
void sum(int arr[],int idx,int ans,int n){
    if(idx==n){
        cout<<ans<<endl;
        return;
    }
    ans+=arr[idx];
    sum(arr,idx+1,ans,n);
}
int main(){
    int arr[]={1,5,9};
    int n=3;
    int idx=0;
    sum(arr,idx,0,n);
}