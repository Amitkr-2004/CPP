#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
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
            temp->prev=tail;//extra
            tail=temp; 
        }
        size++;
    }
    void InsertAtBegin(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
        temp->next=head;
        head->prev=temp;//extra
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
            Node* t=new Node(val);
            Node * temp=head;            
            while(count!=idx-1){
                temp=temp->next;
                count++;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;//extra
            t->next->prev=t;//extra
            size++;
        }  
    }
        int getIdxVal(int idx){
        if(idx==0)  return head->val;
        else if(idx==size-1)  return tail->val;
        else if(idx<0 || idx>size)  cout<<"Invalid";
        else{
            if(idx<size/2){
            int count=0;
            Node * temp=head;            
            while(count!=idx){
                temp=temp->next;
                count++;
            }
            return temp->val;
        }
            if(idx>=size/2){
            int n=size-idx-1;
            int count=0;
            Node * temp=tail;         
            while(count!=n){
                temp=temp->prev;
                count++;
            }  
            return temp->val;
        }
    }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"Empty List";
            return;
        }
        head=head->next;
        if(head!=NULL)  head->prev=NULL;//extra
        else    tail=NULL;              //extra
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"Empty List";
            return;
        }
        else if(size==1){    //extra
            deleteAtHead();
            return;
        }
        else{
        Node* temp=tail->prev;
        temp->next=NULL;//extra
        tail=temp;
        size--;
        }
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
            t->next->prev=temp;//extra
            size--;
        }
    }
void display(){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
    }
    // cout<<endl;
}
};
int main(){
    DLL dll;
    dll.InsertAtEnd(10);
    dll.InsertAtEnd(20);
    dll.InsertAtEnd(30);
    dll.InsertAtEnd(40);
    dll.InsertAtEnd(50);
    dll.InsertAtEnd(60);
    dll.display();
    cout<<endl;
    dll.InsertAtBegin(50);
    dll.display();
    cout<<endl;
    dll.insertAtIndex(70,3);
    dll.display();
    cout<<endl;

    dll.deleteAtHead();
    dll.display();
    cout<<endl;

    dll.deleteAtTail();
    dll.display();
    cout<<endl;
    
    dll.deleteAtTail();
    dll.display();
    cout<<endl;

    dll.deleteAtIndex(3);
    dll.display();
    cout<<endl;

    dll.deleteAtIndex(2);
    dll.display();
    cout<<endl;

    dll.InsertAtBegin(50);
    dll.InsertAtBegin(60);
    dll.InsertAtBegin(70);
    dll.display();
    cout<<endl;

    cout<<dll.getIdxVal(3);
}