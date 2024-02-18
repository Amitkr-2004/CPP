#define ll long long int
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
ll dp[3005][3005];
ll f(int i,int j){
    if(i==j)    return a[i];
    if(dp[i][j]!=-1)    return dp[i][j];
    return dp[i][j]=max(a[i]-f(i+1,j),a[j]-f(i,j-1));
}

int main(){
    memset(dp,-1,sizeof dp);
    int n;
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<f(0,n-1);
}