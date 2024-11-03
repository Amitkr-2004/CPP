#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;

    bool flag=false;
    if(s.size()%k!=0){
        flag=true;
    }

    vector<int> freq(26,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    unordered_map<int,int> mp;
    for(int i=0;i<26;i++){
        if(freq[i]%k!=0){
            flag=true;
            break;
        }
        else if(freq[i]!=0){
            mp[i]=freq[i];
        }
    }
    string org="";
    for(auto x:mp){
        char ch=x.first+'a';
        int freq=x.second;

        for(int i=1;i<=freq/k;i++){
            org+=ch;
        }
    }
    string str="";
    for(int i=1;i<=k;i++){
        str+=org;
    }
    if(flag==true)  cout<<-1<<endl;
    else    cout<<str<<endl;
}