#include<iostream>
using namespace std;
void permutation(string ans,string orig){
    if(orig==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<orig.size();i++){
        char ch=orig[i];
        string left=orig.substr(0,i);
        string right=orig.substr(i+1);
        permutation(ans+ch,left+right);
    }
}
int main(){
    string s="abc";
    string t;
    permutation(t,s);
}