#include<iostream>
#include<string>
#include<vector>
using namespace std;
void generate(string s,int i,int k,vector<string> &ans){
    if(i==k){
        ans.push_back(s);
        return;
    }
    generate(s+'0',i+1,k,ans);
    if(s[s.size()-1]!='1')  generate(s+'1',i+1,k,ans);
}
int main(){
    int k=4;
    vector<string> ans;
    generate("",0,k,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}