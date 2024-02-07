#include<iostream>
using namespace std;
int main(){
    int v[9]={2,4,5,6,7,8,9,10,11};
    int lo=0;
    int hi=1;
    int x=8;
    bool flag=false;
    while(v[hi]<x){
        lo=hi;
        hi=hi*2;
    }
    cout<<lo<<" "<<hi<<endl;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==x){
            cout<<mid;
            flag=true;
            break;
        }
        else if(v[mid]<x)   lo=mid+1;
        else        hi=mid+1;
    }
    if(flag==false){
        cout<<-1;
    }
    cout<<endl;
}