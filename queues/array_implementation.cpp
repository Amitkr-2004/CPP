#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    vector<int> arr;
        Queue(int val){
            f=0;
            b=0;
            vector<int> v(val);
            arr=v;
        }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b==0){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        f++;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int front(){
        if(b==0){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int x=arr[f];
        return x;
    }
    int back(){
        if(b==0){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }   
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0)  return true;
        else    return false;
    }
};
int main(){
    Queue q(5);
    q.pop();
    cout<<q.empty()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
}