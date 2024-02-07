#include<iostream>
using namespace std;
int main(){
    int v[7]={10,8,7,5,4,3,1};
    int n=7;
    int x=1;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==x){
            flag=true;
            cout<<mid;
            break;
        }
        else if(v[mid]>x)   lo=mid+1;
        else                hi=mid-1;
    }
    if(flag==false){
        cout<<-1;
    }
    cout<<endl;
}