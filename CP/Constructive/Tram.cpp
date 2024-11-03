#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int exit,entry;
        cin>>exit>>entry;
        v.push_back({exit,entry});
    }
    int total=0;
    int mx=INT_MIN;
    for(auto x:v){
        int exit=x.first;
        int entry=x.second;
        total=(total-exit)+entry;
        mx=max(total,mx);
    }
    cout<<mx<<endl;
}