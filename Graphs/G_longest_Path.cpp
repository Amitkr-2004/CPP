#include<bits/stdc++.h>
using namespace std;
int dp[10005];
vector<int> gr[10005];
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int longestPath(int src){
    if(dp[src]!=-1)   return dp[src]; 
    bool leaf=1;
    int ans=0;
    for(auto child:gr[src]){
        leaf=0;
        ans=max(ans,longestPath(child));
    }
    return dp[src]=leaf?0:ans+1;
}
int main(){
    file_i_o();
    memset(dp,-1,sizeof(dp));
    int v,e;
    cin>>v>>e;
    while(e-->0){
        int a,b;
        cin>>a>>b;
        gr[a].push_back(b);
    }
    int result=INT_MIN;
    for(int i=1;i<=v;i++){
        result=max(result,longestPath(i));
    }
    cout<<result<<endl;
}