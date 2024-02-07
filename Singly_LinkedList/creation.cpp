#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void displayrec(Node *head){
    if(head==NULL)  return;
    cout<<head->val<<" ";
    displayrec(head->next);
}

void displayreverse(Node *head){
    if(head==NULL)  return;
    displayreverse(head->next);
    cout<<head->val<<" ";
}
void display(Node *head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int count(Node* head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
void insertAtEnd(Node* head,int val){
    Node* temp=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=temp;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    // display(a);
    displayrec(a);
    cout<<endl;
    displayreverse(a);
    cout<<endl;
    insertAtEnd(a,60);
    display(a);
}