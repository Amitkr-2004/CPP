#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,char op){
   string s="";
   s+=val1;
   s+=val2;
   s.push_back(op);
   return s;
}
int main(){
    stack<string> val;
    string s="-/*+79483";
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<58)    val.push(to_string(s[i]-48));
        else{
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);
            val.push(ans);
            }
        }
    cout<<val.top()<<endl;
}