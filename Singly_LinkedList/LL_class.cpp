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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void InsertAtEnd(int val){
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
    void InsertAtBegin(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
        temp->next=head;
        head=temp;
        }
        size++;
    }
    void insertAtIndex(int val,int idx){
        if(idx==0)  InsertAtBegin(val);
        else if(idx==size)  InsertAtEnd(val);
        else if(idx<0 || idx>size)  cout<<"Invalid";
        else{
            int count=0;
            Node* temp=new Node(val);
            Node * p=head;            
            while(count!=idx-1){
                p=p->next;
                count++;
            }
            temp->next=p->next;
            p->next=temp;
            size++;
        }  
    }
        int getIdxVal(int idx){
        if(idx==0)  return head->val;
        else if(idx==size-1)  return tail->val;
        else if(idx<0 || idx>size)  cout<<"Invalid";
        else{
            int count=0;
            Node * p=head;            
            while(count!=idx){
                p=p->next;
                count++;
            }
            return p->val;
        }  
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"Empty List";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"Empty List";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        size--;
        tail=temp;
    }
    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"Empty List";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        else if(idx==0)     deleteAtHead();
        else if(idx==size-1)    deleteAtTail();
        else{
            Node* temp=head;
            Node* t=head->next;
            int count=0;
            while(count!=idx-1){
                temp=temp->next;
                t=t->next;
                count++;
            }
            temp->next=t->next;
            size--;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.InsertAtEnd(10);
    ll.display();
    ll.InsertAtEnd(20);
    ll.display();
    ll.InsertAtEnd(30);
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.InsertAtBegin(90);
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.InsertAtBegin(80);
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.insertAtIndex(100,3);
    ll.display();
    cout<<ll.size;
    cout<<endl;

    cout<<ll.getIdxVal(5);
    cout<<endl;

    ll.deleteAtHead();
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.deleteAtTail();
    ll.display();
    cout<<ll.size;
    cout<<endl;

    ll.deleteAtIndex(2);
    ll.display();
    cout<<ll.size;
    cout<<endl;
}