#include<climits>
#include<iostream>
using namespace std;
// int maxvalue(int arr[],int n,int i,int &max){
//     if(i==n)    return max;
//     if(max<arr[i])  max=arr[i];
//     maxvalue(arr,n,i+1,max);
// }
int max(int arr[],int n,int i){
    if(n==i)    return INT_MIN;
    return max(arr[i],max(arr,n,i+1));
}
int main(){
    int arr[5]={2,4,6,12,7};
    // int max=INT_MIN;
    // cout<<maxvalue(arr,5,0,max);
    cout<<max(arr,5,0);
}