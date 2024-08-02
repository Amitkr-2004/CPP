#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        v.push_back(a);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]=="X++" or v[i]=="++X")     ans++;
        if(v[i]=="X--" or v[i]=="--X")     ans--;
    }
    cout<<ans<<endl;
}