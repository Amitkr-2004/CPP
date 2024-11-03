#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;

  while(t-->0){
    string p,hash;
    cin>>p>>hash;

    unordered_map<char,int> mp;
    for(int i=0;i<p.size();i++){
        mp[p[i]]++;
    }
    unordered_map<char,int> org=mp;
    bool flag=false;
    int n=hash.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(mp[hash[j]]==0)      break;
            else{
                mp[hash[j]]--;
                if(mp[hash[j]]==0)      mp.erase(hash[j]);
                if(mp.size()==0){
                    flag=true;
                    break;
                }
            }
        }
        if(flag==true)      break;
        else    mp=org;
    }
    if(flag==true)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
  }
}