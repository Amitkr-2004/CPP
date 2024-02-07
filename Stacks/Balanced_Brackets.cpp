#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool bracket(string exp){
    if(exp.length()%2!=0)   return false;
    stack<char> st;
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(')     st.push(exp[i]);
        else if(exp[i]==')'){
            if(st.size()==0)    return false;
            st.pop();
        }
    }
    if(st.size()==0)    return true;
}
int main(){
    string exp="())()(";
    cout<<bracket(exp);
}