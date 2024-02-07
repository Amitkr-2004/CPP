#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue <int> &q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseQueue(queue <int> &q){
    stack<int> st;
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;
    display(q);
    reverseQueue(q);
    display(q);
    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;
}