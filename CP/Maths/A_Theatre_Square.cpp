#define ll long long 
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n,m,a;
    cin>>n>>m>>a;

    ll ans1 = ceil(n/(a*1.0));
    ll ans2 = ceil(m/(a*1.0));

    cout<<ans1*ans2<<endl;
}