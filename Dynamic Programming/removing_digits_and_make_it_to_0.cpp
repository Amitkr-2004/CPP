#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> dp;
vector<int> digits(int n){
    vector<int> ans;
    while(n>0){
        if(n%10!=0)     ans.push_back(n%10);    //not including zeroes
        n=n/10;
    }
    return ans;
}
int ftb(int n){
    if(n==0)    return 0;
    if(n<=9)    return 1;
    vector<int> d=digits(n);

    if(dp[n]!=-1)   return dp[n];
    int mn=INT_MAX;
    for(int i=0;i<d.size();i++){
        mn=min(mn,ftb(n-d[i]));
    }
    return dp[n]= 1 + mn;
}
int fbt(int num){   //T.C=O(n)
    dp[0]=0;
    for(int i=1;i<=9;i++)   dp[i]=1;
    //order
    for(int n=10;n<=num;n++){       //O(n)
        vector<int> d=digits(n);
        int result=INT_MAX;
        for(int i=0;i<d.size();i++){    //O(1)  ->as it max run to 6 times
        result=min(result,dp[n-d[i]]);
        }
    dp[n]=1+result;
    }
    return dp[num];
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1e6+5,-1);
    // cout<<ftb(n)<<endl;
    cout<<fbt(n)<<endl;
}