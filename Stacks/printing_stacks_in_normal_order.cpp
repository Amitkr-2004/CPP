#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> gt;
    stack<int> rt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //printing stack in reverse order
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        gt.push(x);
    }
    //Again filling Stack rt
    while(gt.size()>0){
        int x=gt.top();
        gt.pop();
        rt.push(x);
    }
    //
    while(rt.size()>0){
        int x=rt.top();
        rt.pop();
        st.push(x);
    }
    cout<<endl<<st.top()<<" ";
}