#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n+1);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    vector<int> ans(n+1);
    for(int i=1;i<=n;i++){
        ans[v[i]]=i;
    }

    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}