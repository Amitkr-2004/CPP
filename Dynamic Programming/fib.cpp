#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;
//top down soln
// int fib(int n){
//     if(n==0 || n==1)    return n;
//     if(dp[n]!=-1)   return dp[n];
//     return dp[n]=fib(n-1) + fib(n-2);
// }

//bottom up soln   //using array  ->S.C=O(n)
 

// int fib(int n){
//     if(n==0 || n==1)    return n;
//     dp.clear();
    // dp.resize(n+1,-1);  //-1 indicates that the index is not visited
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

//bottom up soln ->S.C=O(1)
int fib(int n){
    int a=0;
    int b=1;
    if(n==0 || n==1)    return n;
    int c;
    int i=2;
    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    // dp.clear();
    // dp.resize(n+1,-1);  //-1 indicates that the index is not visited
    cout<<fib(n)<<"\n";
}