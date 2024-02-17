#define ll long long int
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
ll dp[105][100005];
ll f(vector<int> &wts,vector<int> &val,int idx,int W){
    if(idx==wts.size())      return 0;

    if(dp[idx][W]!=-1)  return dp[idx][W];
    ll ans=INT_MIN;
    
    //if not pick
    ans=max(ans,f(wts,val,idx+1,W));
    //pick
    if(wts[idx]<=W){
        ans=max(ans,val[idx]+f(wts,val,idx+1,W-wts[idx]));
    }
    return dp[idx][W]=ans;
}

ll fbt(vector<int> &wts,vector<int> &val,int W){
    memset(dp,0,sizeof dp);
    int n=wts.size();
    for(int idx=n-1;idx>=0;idx--){
        for(int j=0;j<=W;j++){
            ll ans=INT_MIN;
            //if not pick
            ans=max(ans,dp[idx+1][j]);
            //pick
            if(wts[idx]<=j){
                ans=max(ans,val[idx]+dp[idx+1][j-wts[idx]]);
            }
            dp[idx][j]=ans;
        }   
    }
    return dp[0][W];
}
int main(){
    // memset(dp,-1,sizeof dp);
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
    cout<<fbt(wts,val,W)<<endl;
}