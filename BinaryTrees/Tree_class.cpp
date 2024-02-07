#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=NULL; 
        right=NULL; 
    }
};
void display(Node* root){
    if(root==NULL)  return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int size(Node* root){
    if(root==NULL)  return 0;
    int n=1+size(root->left) + size(root->right);
    return n;
}
int sum(Node* root){
    if(root==NULL)  return 0;
    int ans=root->val + sum(root->left) + sum(root->right);
    return ans;
}

int maxNode(Node* root){
    if(root==NULL)  return INT_MIN;
    int Lmax=maxNode(root->left);
    int Rmax=maxNode(root->right);
    int ans=max(root->val,max(Lmax,Rmax));
    return ans;
}

int levels(Node* root){
    if(root==NULL)  return 0;
    int ans=1 + max(levels(root->left),levels(root->right));
    return ans;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    d->left=h;

    display(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxNode(a)<<endl;
    cout<<levels(a)<<endl;
}