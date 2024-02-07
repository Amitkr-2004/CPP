#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)    continue;
        if(arr[i]<=pivotElement)    
            count++;
    }
    int pivotIndex=si+count;
    swap(arr[(si+ei)/2],arr[pivotIndex]);
    int i=si;
    int j=ei;
    while(i<pivotIndex &&j>pivotIndex){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>=pivotElement && arr[j]<pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei)  return;
    int pi=partition(arr,si,ei);

    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[8]={5,1,8,2,7,6,3,4};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}