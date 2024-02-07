#include<iostream>
#include<vector>
using namespace std;
void Subarray(vector<int> v,int arr[],int n,int i){
    if(i==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    Subarray(v,arr,n,i+1);
    if(v.size()==0){
    v.push_back(arr[i]);
    Subarray(v,arr,n,i+1);
    }
    else if(v[v.size()-1]==arr[i-1]){
            v.push_back(arr[i]);
            Subarray(v,arr,n,i+1);
        }
    }
int main(){
    int arr[4]={1,2,3,4};
    int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int> v;
    Subarray(v,arr,n,0);
}