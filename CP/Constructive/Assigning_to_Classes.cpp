#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> v(2*n);
        for(int i=0;i<2*n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int ans=abs(v[n-1]-v[n]);

        cout<<ans<<endl;
    }
}