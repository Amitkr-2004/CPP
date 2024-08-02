#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string ans="";

    while(n>0){
        if(n==9){
            ans=to_string(n)+ans;
            break;
        }
        long long rem=n%10;
        long long invert=9-rem;
        long long mn=min(rem,invert);
        ans=to_string(mn)+ans;
        n=n/10;
    }
    cout<<ans<<endl;
}