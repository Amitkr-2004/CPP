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
int product(Node* root){
    if(root==NULL)  return 1;
    int ans=root->val * product(root->left) * product(root->right);
    return ans;
}
int minNode(Node* root){
    if(root==NULL)      return INT_MAX;
    int LNode=minNode(root->left);
    int RNode=minNode(root->right);
    int ans=min(root->val,min(LNode,RNode));
    return ans;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(5);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    cout<<product(a)<<endl;
    cout<<minNode(a)<<endl;
}