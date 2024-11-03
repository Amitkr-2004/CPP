#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    string ans="";

    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            flag=true;
            cout<<"YES"<<endl;
            ans+=s[i];
            ans+=s[i+1];
            cout<<ans<<endl;
            break;
        }
    }
    if(flag==false)             cout<<"NO"<<endl;
}
