#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &st){
    stack<int> temp;
     while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    //Again filling Stack
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}
int main(){
    stack<int> st;
    stack<int> helper;
    int k=3;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int i=1;
    while(i<k){
        helper.push(st.top());
        st.pop();
        i++;
    }
    st.pop();
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
    print(st);
}