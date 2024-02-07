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
bool isInRange(Node* root,int lo,int hi,int &cnt){
    if(root==NULL)  return true;
    bool left=isInRange(root->left,lo,hi,cnt);
    bool right=isInRange(root->right,lo,hi,cnt);
    if(left==true && right==true &&(root->val>=lo && root->val<=hi)){
        cnt++;
        return true;
    }
    return false;
} 
int main(){
    int arr[]={40,25,50,20,30,45,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    int lo=15;
    int hi=42;
    int cnt=0;
    isInRange(root,lo,hi,cnt);
    cout<<cnt;
    cout<<endl;
}