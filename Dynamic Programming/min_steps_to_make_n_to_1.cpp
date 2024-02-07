#include<iostream>
#include<vector>
#include<climits>
using namespace std;
#define inf INT_MAX

vector<int> dp;
int ftb(int n){
    if(n==1)    return 0;
    if(n==2)    return 1;
    if(n==3)    return 1;

    if(dp[n]!=-1)   return dp[n];
    
    return dp[n]= 1+ min(ftb(n-1),min((n%2==0)?ftb(n/2):inf , (n%3==0)?ftb(n/3):inf));
}
int fbt(int n){
    dp.clear();
    dp.resize(n+1);
    //base case
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;

    for(int i=4;i<=n;i++){
        dp[i]=1+ min(dp[i-1],min((i%2==0)?dp[i/2]:inf , (i%3==0)?dp[i/3]:inf));
    }
    return dp[n];
}
int main(){
    // dp.clear();
    int n;
    cin>>n;
    // dp.resize(n+1,-1);
    // cout<<ftb(n)<<endl;

    cout<<fbt(5)<<endl;;
}