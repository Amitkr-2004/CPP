#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse_k_elements(queue<int> &q,int k){
    stack<int> st;
    for(int i=1;i<=k;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
    int n=q.size();
    int len=n-k;
    for(int i=1;i<=len;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
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
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse_k_elements(q,3);
    display(q);
}

