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
void pushAtBottom(stack<int> &st,int val){
    stack<int> temp;
     while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}
void pushAtIndex(stack<int> &st,int idx,int val){
    stack<int> temp;
    while(st.size()>idx){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushAtBottom(st,80);
    print(st);
    cout<<endl;
    pushAtIndex(st,2,70);
    print(st);
}