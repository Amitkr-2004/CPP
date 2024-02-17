#define ll long long int
#include<iostream>
#include<climits>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int>arr;
int dp[105][105];

ll g(int m,int n){
    ll sum=0;
    for(int i=m;i<=n;i++){
        sum=(sum%100 + arr[i]%100)%100;
    }
    return sum;
}
ll f(int i,int j,int n){
    if(i==j)    return 0;

    if(dp[i][j]!=-1)    return dp[i][j];
    ll ans=INT_MAX;
    for(int k=i;k<=j-1;k++){
        ans=min(ans,f(i,k,n)+f(k+1,j,n)+g(i,k)*g(k+1,j));
    }
    return dp[i][j]=ans;
}
int main(){
    int n;
    while(cin>>n){
        memset(dp,-1,sizeof dp);
        arr.resize(n);
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        int ans=f(0,n-1,n);
    cout<<ans<<endl;
    arr.clear();
    }
}