#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    stack<int> st;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int n=q.size();
    //display
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
    //for 1st half
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //emptying stack
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //for 2nd half
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //emptying stack
    while(st.size()>0){
        q.push(st.top());
        q.push(q.front());
        q.pop();
        st.pop();
    }
    //reverse queue
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //display
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}


