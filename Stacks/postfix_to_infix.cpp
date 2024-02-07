#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,char op){
    string s="";
    s+=val1;
    s.push_back(op);
    s+=val2;
    return s;
}
int main(){
    stack<string> val;
    string s="79+4*8/3-";
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57)    val.push(to_string(s[i]-48));
        else{
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            // string ans=val1+ s[i] +val2;     //this is also correct
            string ans=solve(val1,val2,s[i]);   
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}