#include<iostream>
using namespace std;

int main(){
    int arr[]={2,5,3,6,5,3,2};
    int n=7;
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    cout<<res;
}