#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t-->0){
        ll w,h;
        cin>>w>>h;
        ll k1,k2,k3,k4;
        cin>>k1;
        vector<ll> a(k1);
        for(ll i=0;i<k1;i++)   cin>>a[i];

        cin>>k2;
        vector<ll> b(k2);
        for(ll i=0;i<k2;i++)   cin>>b[i];

        cin>>k3;
        vector<ll> c(k3);
        for(ll i=0;i<k3;i++)   cin>>c[i];

        cin>>k4;
        vector<ll> d(k4);
        for(ll i=0;i<k4;i++)   cin>>d[i];

        // cout<<a[k1-1]<<" "<<b[k2-1]<<" "<<c[k3-1]<<" "<<d[k4-1]<<endl;
        
        ll mxX=max(a[k1-1]-a[0],b[k2-1]-b[0]);
        ll mxY=max(c[k3-1]-c[0],d[k4-1]-d[0]);
        ll mx=max(mxX,mxY);

        ll ans1=mxX*h;
        ll ans2=mxY*w;

        cout<<max(ans1,ans2)<<endl;
    }
}