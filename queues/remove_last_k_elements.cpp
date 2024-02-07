#include<iostream>
#include<queue>
using namespace std;

void Remove_last_k_elements(queue<int> &q,int k){
    int count=1;
   int n=q.size();
   for(int i=1;i<=(n-k);i++){
        int x=q.front();
        q.pop();
        q.push(x);
        count++;
   }
   while(count<=n){
        q.pop();
        count++;
   }
   while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
   }
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k=3;
    Remove_last_k_elements(q,k);
}