#include <bits/stdc++.h>

using namespace std;

int main(){
   long long n;
   cin>>n;

   vector<long long> v(n);

   for(long long i=0;i<n;i++)     cin>>v[i];

   long long idx=-1;
    long long maxVal=v[n-1];
    long long ans=0;
    ans+=maxVal;
    for(long long i=n-2;i>=0;i--){
        if(maxVal!=1 and v[i]<maxVal){
            maxVal=v[i];
            ans+=maxVal;
        }
        else{
            if(maxVal==1)   continue;
            maxVal=maxVal-1;
            ans+=maxVal;
        }
   }
   cout<<ans<<endl;
}