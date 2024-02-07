#include<iostream>
#include<queue>
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
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    int i=1;
    int j=2;
    Node* l;
    Node* r;
    q.push(root);
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        
        if(arr[i]!=INT_MIN)    l=new Node(arr[i]);
        else    l=NULL;

        if(j<n && arr[j]!=INT_MIN)    r=new Node(arr[j]);
        else    r=NULL;

        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
void leftBoundary(Node* root){
    if(root==NULL)   return;
    if(root->left==NULL && root->right==NULL)   return; //for leaf node
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL)    leftBoundary(root->right);  //if root left is not present then go to RST
}
void bottomBoundary(Node* root){
    if(root==NULL)      return;
    if(root->left==NULL && root->right==NULL)   cout<<root->val<<" ";   //for leaf node
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void rightBoundary(Node* root){
    if(root==NULL)   return;
    if(root->left==NULL && root->right==NULL)   return;
    rightBoundary(root->right);
    if(root->right==NULL)    rightBoundary(root->left);
    cout<<root->val<<" ";       //reverse printing thus first calling and then printing
}
void Boundary(Node* root){
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    cout<<endl;
    Boundary(root);
}