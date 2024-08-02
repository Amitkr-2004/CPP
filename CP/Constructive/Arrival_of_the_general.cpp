#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=INT_MIN,mn=INT_MAX;
    int minIdx=-1,maxIdx=-1;

    for(int i=0;i<n;i++){
        if(mx<v[i]){
            mx=v[i];
            maxIdx=i;
        }
        if(mn>=v[i]){
            mn=v[i];
            minIdx=i;
        }
    }
    int ops=0;
    if(maxIdx<=minIdx)   ops=maxIdx+(n-minIdx-1);
    else ops=maxIdx+(n-minIdx-2);
    cout<<ops;
}