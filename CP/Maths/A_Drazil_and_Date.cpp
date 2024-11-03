#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a,b,s;
    cin>>a>>b>>s;
    
    ll extra=s-(abs(a) + abs(b));
    if(extra<0 or extra%2)  cout<<"No";
    else    cout<<"Yes";
    cout<<endl;
}