#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main(){
    ll n;
    cin>>n;
    while(n-->0){
        ll heaters,sum;
        cin>>heaters>>sum;

        if(heaters>sum){
            cout<<sum<<endl;
            continue;
        }

        ll rem=sum%heaters;
        ll div=sum/heaters;

        if(rem!=0){
            cout<<((div+1)*(div+1))*rem + (div*div)*(heaters-rem)<<endl;
        }
        else{
            cout<<(div*div)*heaters<<endl;
        }
    }
}