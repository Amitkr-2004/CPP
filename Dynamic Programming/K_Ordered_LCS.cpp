#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[2005][2005][8];

ll f(vector<int> &a,vector<int> &b,int i,int j,int k){
    if(i==a.size())     return 0;
    if(j==b.size())     return 0;

    if(dp[i][j][k]!=-1)     return dp[i][j][k];
    ll res=0;
    if(a[i]==b[j]){     //a[i]==b[j]
        res=1+f(a,b,i+1,j+1,k);
    }
    else{           //a[i]!=b[j]
        if(k>0){
            res=1+f(a,b,i+1,j+1,k-1);
        }
        res=max(res,f(a,b,i+1,j,k));
        res=max(res,f(a,b,i,j+1,k));
    }
    dp[i][j][k]=res;
    return res;
}
int main(){

    memset(dp,-1,sizeof dp);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        a.push_back(l);
    }
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        b.push_back(l);
    }
    cout<<f(a,b,0,0,k);
}