#define ll long long int
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
ll dp[105][100005];
ll f(vector<int> &wts,vector<int> &val,int idx,int tv){
    if(tv==0)   return 0;
    if(idx==wts.size())      return INT_MAX;
    if(dp[idx][tv]!=-1)  return dp[idx][tv];
    ll ans=INT_MAX; 
    
    //if not pick
    ans=min(ans,f(wts,val,idx+1,tv));
    //pick
    if(val[idx]<=tv){
        ans=min(ans,wts[idx]+f(wts,val,idx+1,tv-val[idx]));
    }
    return dp[idx][tv]=ans;
}

int main(){
    memset(dp,-1,sizeof dp);
    int n,W;
    cin>>n>>W;
    vector<int> wts;
    vector<int> val;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        wts.push_back(a);
        val.push_back(b);
    }
    int ans=-1;
    for(int i=0;i<=n*1000;i++){
        if(f(wts,val,0,i)<=W)
            ans=i;
    }
    cout<<ans<<"\n";
}