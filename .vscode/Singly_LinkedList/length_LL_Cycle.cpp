#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int length(Node* head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
        temp=temp->next;
        n++;
    }
    int count=1;
    Node* slow=head; 
    Node* fast=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            flag=true;
            break;
        }
    }
    if(flag==false)  return 0;
    else{
        Node* t=head;
        while(t!=slow){
            t=t->next;
            slow=slow->next;
            count++;
        }
    }
    return n-count;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(2);

    head->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    display(head);
    cout<<endl;
    cout<<length(head);
}