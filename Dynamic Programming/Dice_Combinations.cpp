#include<iostream>
#include<vector>
#define mod 1000000007
using namespace std;

vector<int> dp;
int ftb(int n){
    if(n==0)    return 1;


    if(dp[n]!=-1)   return dp[n];

    int result=0;
    for(int i=1;i<=6;i++){
        if((n-i)<0)   break;
        result=(result % mod + ftb(n-i) % mod) % mod;
    }
    return dp[n]=result%mod;
}
int fbt(int n){
    dp[0]=1;

    for(int k=1;k<=n;k++){
    int result=0;
    for(int i=1;i<=6;i++){
        if((k-i)<0)   break;
        result=(result % mod + dp[k-i] % mod) % mod;
    }
    dp[k]=result%mod; 
    }
    return dp[n]; 
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1e6+5,-1);
    // cout<<ftb(n)<<endl;
    cout<<fbt(n)<<endl;
}