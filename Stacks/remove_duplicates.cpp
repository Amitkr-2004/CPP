#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
void remove_duplicates(string exp){
    stack<char> st;
    string s;
    st.push(exp[0]);
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]!=st.top())     st.push(exp[i]);
    }
        while(st.size()>0){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        cout<<s;
    }
int main(){
    string exp="aaabbcddaabffg";
    cout<<exp<<endl;
    remove_duplicates(exp);
}