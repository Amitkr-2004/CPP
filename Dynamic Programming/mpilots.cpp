#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int dp[10005][5005];
int f(vector<int> &as,vector<int> &cap,int i,int x,int n){
    if(i==n)    return 0;

    if(dp[i][x]!=-1)    return dp[i][x];

    if(x==0){   //assistant
        return dp[i][x]=f(as,cap,i+1,x+1,n) + as[i];
    }
    else if(x==(n-i)){     //captain
        return dp[i][x]=f(as,cap,i+1,x-1,n) + cap[i];
    }
    else{
        return dp[i][x]=min(f(as,cap,i+1,x+1,n)+as[i],f(as,cap,i+1,x-1,n)+cap[i]);
    }
}
int main(){
    memset(dp,-1,sizeof dp);
    int n;
    cin>>n;
    vector<int> as(n);
    vector<int> cap(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        cap.push_back(a);
        as.push_back(b);
    }

    cout<<as[0]+f(as,cap,1,1,n);
}