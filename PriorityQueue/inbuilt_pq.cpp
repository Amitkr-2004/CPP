#include<iostream> 
#include<vector> 
#include<queue> 
using namespace std;
int main(){
    vector<int> v={9,6,1,19,3,2,8,12,5};
    int arr[]={9,6,1,19,3,2,8,12,5};
    priority_queue<int> maxheap;    //default is maxHeap
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //for min heap
    priority_queue<int,vector<int>, greater<int> > minhpvector(v.begin(),v.end()); //for min heap
    priority_queue<int> maxhpArray(arr,arr+9); //for mKOin heap
    pq.push({10,0});
    pq.push({35,1});
    // pq.push(-52);
    // pq.push(32);
    // pq.push(100);

    cout<<pq.top().first<<endl;
    cout<<minhpvector.top()<<endl;
    cout<<maxhpArray.top()<<endl;
}