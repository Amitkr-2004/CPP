#include<iostream>
using namespace std;
int main(){
    int v[7]={1,2,4,5,6};
    int n=7;
    int x=5;
    int lo=0;
    int hi=n-1;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==x){
            cout<<mid<<endl;
            break;
        }
        else if(v[mid]>x)   hi=mid-1;
        else    lo+mid+1;   
    }
}