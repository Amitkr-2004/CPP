#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)    continue;
        if(arr[i]<=pivotElement) 
            count++;
    }
    int pivotIdx=si+count;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        else if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int kthSmallest(int arr[],int si,int ei,int k){
    int pi=partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k)     return kthSmallest(arr,pi+1,ei,k);
    else    return kthSmallest(arr,si,pi-1,k);
}
int main(){
    int arr[]={5,18,82,20,7,6,31,4,-8};
    int n=9;
    int k=6;
    cout<<kthSmallest(arr,0,n-1,k);
}