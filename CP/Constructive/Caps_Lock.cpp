#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag=false;

    for(int i=1;i<s.size();i++){
        if(s[i]>=97 and s[i]<=122){
            flag=true;
            cout<<s<<endl;
            break;
        }
    }
    if(flag==false){
        string ans="";
        char ch=s[0];
        if(ch>=97 and ch<=122){
            ans+=(ch-32);
        }
        else    ans+=(ch+32);

        for(int i=1;i<s.size();i++){
            char ch=s[i];
            ans+=(ch+32);
        }
        cout<<ans<<endl;
    }
}