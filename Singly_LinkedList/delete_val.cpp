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
Node* delete_val(Node* head,int val){
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    while(temp!=NULL){
        if(temp->val==val)  head=temp->next;
        else if(temp->next->val==val)   temp->next=temp->next->next;
        temp=temp->next;
    }

    return head;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(7);
    Node* b=new Node(7);
    Node* c=new Node(7);
    Node* d=new Node(7);
    Node* e=new Node(7);
    Node* f=new Node(7);
    Node* g=new Node(7);

    head->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;

    display(head);
    cout<<endl;
    delete_val(head,1);
    display(head);
}