#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
       int n,m;
       cin>>n>>m;
       int ans=0;
       ans=(n/2)*m;

       if(n%2==0){
         cout<<ans;
       }
       else{
         ans+=(m/2);
         if(m%2==1)     ans+=1;
         cout<<ans;
       }
       cout<<endl;
    }
}