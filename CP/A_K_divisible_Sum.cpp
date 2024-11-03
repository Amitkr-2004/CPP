#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-->0){
        double n,k;
        cin>>n>>k;

        ll f=ceil(n/k);    
        k=k*f;      //to find nearest sum
        ll res = ceil(k/n);
        cout<<res<<endl;
    }
}