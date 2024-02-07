#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    string first=v[0];
    string last=v[n-1];
    int a=first.size();
    int b=last.size();
    string ans="";
    for(int i=0;i<min(a,b);i++){
        if(first[i]==last[i]){
            ans=ans+first[i];
        }
        else{
            break;
        }
    }
    cout<<ans;
}
