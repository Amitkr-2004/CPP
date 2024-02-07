#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={12,3,1,6,1,6,18,18,6,6,6,4,3,8,13,13,13,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            count=1;
            mx=arr[i];
        }
        else if(arr[i]==mx){
            count++;
        }
    }
    ans=max(ans,count);
    cout<<ans;
}