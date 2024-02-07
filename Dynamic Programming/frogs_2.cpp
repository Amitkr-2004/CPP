#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> h;
// vector<int> dp(1e5+5,-1);
vector<int> dp;
int k;

int ftb(int i){         //T.C=O(nk)     S.C=O(1e5)
    if(i>=h.size())     return INT_MAX;
    if(i==h.size()-1)     return 0;
    int ans=INT_MAX;
    if(dp[i]!=-1)   return dp[i];
    for(int j=1;j<=k;j++){
        if(i+j>=h.size())      break;
        ans=min(ans,(abs(h[i]-h[i+j])+ftb(i+j)));
    }
    return dp[i]=ans;
}

int fbt(){      //T.C=O(nk)     S.C=O(1e5)
    int n=h.size();
    dp.resize(1e5,INT_MAX);
    dp[n-1]=0;
    for(int i=n-2;i>=0;i--){
        for(int j=1;j<=k;j++){
            if(i+j>=h.size())  break;
            dp[i]=min(dp[i],(abs(h[i]-h[i+j])+dp[i+j]));
        }
    }
    return dp[0];
}
int main(){
    int n;
    cin>>n>>k;
    h.resize(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
        // cout<<ftb(0)<<endl;
        cout<<fbt()<<endl;
}