#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp; 
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Empty List";
            return;
        }
        Node* temp=head;
        head=head->next;
        size--;
        delete(temp); //deletes node and thus no wastage of memory
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int length(){
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else    false;
    }
};
int main(){
    Queue q;
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