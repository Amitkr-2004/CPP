#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long ans=0;

        if(s[0]=='1' or s.back()=='1')     cout<<n*2<<endl;
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='1')   ans+=2;
                else    ans+=1;
            }
            cout<<ans<<endl;
        }
    }
}