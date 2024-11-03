#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n;
        cin>>n;
        vector<ll> v(2*n);

        for(ll i=0;i<2*n;i++)  cin>>v[i];

        ll zeroes=0;
        ll ones=0;
        for(ll i=0;i<v.size();i++){
            if(v[i]==0)     zeroes++;
            else    ones++;
        }

        ll mx=min(zeroes,ones);
        ll mn=0;
        if(zeroes%2==1 and ones%2==1ko)    mn=1;
        
        cout<<mn<<" "<<mx<<endl;
    }
}