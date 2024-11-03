#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int idx=0;
    string res="";
    for(int i=0;i<n;i+=(idx)){
        res+=s[i];
        idx++;
    }
    cout<<res<<endl;
}