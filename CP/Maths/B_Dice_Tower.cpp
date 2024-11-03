#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n;
        cin>>n;
        if(n>14 and n%14>=1 and n%14<=6)     cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
}