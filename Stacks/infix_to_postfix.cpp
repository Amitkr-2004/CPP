#include<iostream>
#include<stack>
using namespace std;
int prec(char ch){
    if(ch=='/' || ch=='*') return 2;
    else    return 1; 
}
string solve(string v1,string v2,char ch){
    string s="";
    s+=v1;
    s+=v2;
    s.push_back(ch);
    return s;
}
int main(){
    stack<string> val;
    stack<char> op;
    string s="(7+9)*4/8-3";
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<58)    val.push(to_string(s[i]-48));
        else{
            if(op.size()==0)      op.push(s[i]);
            else if(s[i]=='(')     op.push(s[i]);
            else if(op.top()=='(')   op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                char oper=op.top();
                op.pop();
                string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                string ans=solve(val1,val2,oper);
                val.push(ans);
                }
                op.pop();
            }
            else if(prec(s[i])>prec(op.top()))  op.push(s[i]);
            else{
            while(op.size()>0 && prec(s[i])<=prec(op.top())){
                char oper=op.top();
                op.pop();
                string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                string ans=solve(val1,val2,oper);
                val.push(ans);
            }
            op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
               char oper=op.top();
                op.pop();
                string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                string ans=solve(val1,val2,oper);
                val.push(ans);
    }
    cout<<val.top()<<endl;
}