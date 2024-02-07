#include<iostream>
#include<vector>
using namespace std;

vector<long long int> fact(int n){
    int MOD=1000000007;
    vector<long long int> ans(n+1,1);
    for(int i=2;i<=n;i++){
        ans[i]=((ans[i-1]%MOD) * (i%MOD))%MOD;
    }
    return ans;
}
int main(){
    vector<long long int> ans=fact(25);
    int n=25;
    for(int i=0;i<=n;i++){
        cout<<i<<"="<<ans[i]<<endl;
    }
}