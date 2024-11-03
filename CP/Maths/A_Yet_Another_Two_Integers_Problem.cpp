#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        
        int diff=abs(a-b);
        int ans=ceil(diff/10.0);
        cout<<ans<<endl;
    }
}