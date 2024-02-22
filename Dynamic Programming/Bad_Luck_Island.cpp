#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double dp[105][105][105];


double fr(int r,int s,int p){
    if(s==0 or r==0)    return 0.0;
    if(p==0)    return 1.0;

    if(dp[r][s][p]>-0.9)    return dp[r][s][p];
    double ans=0.0;
    double total=r*s + s*p + r*p;

    ans+=fr(r,s-1,p)*((r*s)/total);
    ans+=fr(r-1,s,p)*((r*p)/total);
    ans+=fr(r,s,p-1)*((s*p)/total);

    return dp[r][s][p]=ans;
}
double fp(int r,int s,int p){
    if(r==0 or p==0)    return 0.0;
    if(s==0)    return 1.0;

    if(dp[r][s][p]>-0.9)    return dp[r][s][p];
    double ans=0.0;
    double total=r*s + s*p + r*p;

    ans+=fp(r,s-1,p)*((r*s)/total);
    ans+=fp(r-1,s,p)*((r*p)/total);
    ans+=fp(r,s,p-1)*((s*p)/total);

    return dp[r][s][p]=ans;
}
double fs(int r,int s,int p){
    if(p==0 or s==0)    return 0.0;
    if(r==0)    return 1.0;

    if(dp[r][s][p]>-0.9)    return dp[r][s][p];
    double ans=0.0;
    double total=r*s + s*p + r*p;

    ans+=fs(r,s-1,p)*((r*s)/total);
    ans+=fs(r-1,s,p)*((r*p)/total);
    ans+=fs(r,s,p-1)*((s*p)/total);

    return dp[r][s][p]=ans;
}
int main(){
    int r,s,p;
    cin>>r>>s>>p;
    memset(dp,-1.0,sizeof dp);
    double ans_r=fr(r,s,p);
    memset(dp,-1.0,sizeof dp);
    double ans_p=fp(r,s,p);
    memset(dp,-1.0,sizeof dp);
    double ans_s=fs(r,s,p);
    cout<<fixed<<setprecision(12)<<ans_r<<" "<<fixed<<setprecision(12)<<ans_s<<" "<<fixed<<setprecision(12)<<ans_p<<endl;
}
