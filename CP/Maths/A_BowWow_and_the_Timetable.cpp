#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int zeroes=0;
    bool flag=false;
    if(s=="0"){
        cout<<0<<endl;
        flag=true;
    }
    if(flag==false){
        for(int i=0;i<n;i++){
            if(s[i]=='0')   zeroes++;
        }
        if((n-1)%2==0){
            if(n-1==zeroes)     cout<<(n-1)/2;
            else    cout<<(n-1)/2 + 1;
        }
        else    cout<<(n-1)/2 + 1<<endl;
    }
}