#include <bits/stdc++.h>

using namespace std;
vector<long long> ans;
int main(){
    int n;
    cin>>n;
    string ans="";
    while(n%7!=0){
        n-=4;
        ans+='4';
        if(n==0)    break;
    }

    while(n>0){
        n-=7;
        ans+='7';
    }
    if(n==0)    cout<<ans<<endl;
    else    cout<<-1<<endl;
}
