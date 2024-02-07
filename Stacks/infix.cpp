#include<iostream>
#include<stack>
using namespace std;
int prec(char ch){
    if(ch=='/' || ch=='*') return 2;
    else    return 1; 
}
int solve(int val1,char op,int val2){
    if(op=='+')     return val1+val2;
    else if(op=='-')     return val1-val2;
    else if(op=='*')     return val1*val2;
    else if(op=='/')     return val1/val2;
}
int main(){
    stack<int> val;
    stack<char> op;
    string s="7+9*4/8-3";
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<58)    val.push(s[i]-48);
        else{
            if(op.size()==0 || prec(s[i])>prec(op.top()))      op.push(s[i]);
            else{
            while(op.size()>0 && prec(s[i])<=prec(op.top())){
                char oper=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,oper,val2);
                val.push(ans);
            }
            op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
                char oper=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,oper,val2);
                val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<7+9*4/8-3<<endl;
}