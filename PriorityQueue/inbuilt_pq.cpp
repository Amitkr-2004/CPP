#include<iostream> 
#include<vector> 
#include<queue> 
using namespace std;
int main(){
    vector<int> v={9,6,1,19,3,2,8,12,5};
    int arr[]={9,6,1,19,3,2,8,12,5};
    priority_queue<int> maxheap;    //default is maxHeap
    priority_queue<int,vector<int>, greater<int> > minheap; //for min heap
    priority_queue<int,vector<int>, greater<int> > minhpvector(v.begin(),v.end()); //for min heap
    priority_queue<int> maxhpArray(arr,arr+9); //for min heap
    minheap.push(10);
    minheap.push(35);
    minheap.push(-52);
    minheap.push(32);
    minheap.push(100);

    cout<<minheap.top()<<endl;
    cout<<minhpvector.top()<<endl;
    cout<<maxhpArray.top()<<endl;
}