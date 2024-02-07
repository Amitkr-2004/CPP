#include<iostream>
using namespace std;

void UniueElements(int *arr,int n){
    int res=0;
    int k=0;
    for(int i=0;i<n;i++)       res = res ^ arr[i];
    int temp=res;   
    while(true){    //to find set bit
        if((temp & 1)==1)   break;
        temp=temp>>1;
        k++;
    }
    int retval=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        if(((num>>k) & 1)==1)     retval=retval^num;    //to find value which 1 at same idx
    }
    cout<<retval<<" ";
    res=res^retval;
    cout<<res<<" ";
}

int main(){
    int arr[]={2,3,1,5,1,3,5,4};
    int n=8;
    UniueElements(arr,n);
}