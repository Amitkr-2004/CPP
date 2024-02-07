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
void levelOrderQueue(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)    q.push(temp->left);
        if(temp->right!=NULL)    q.push(temp->right);
    }
    cout<<endl;
}
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
int RootToNode(Node* root,int k){
    if(root==NULL)  return 0;
    if(root->val==k)   return 0;
    else if(k<root->val)  //go to left part
        return 1+RootToNode(root->left,k);
    return 1+RootToNode(root->right,k);
}
int distance(Node* root,int k1,int k2){
    if(root==NULL)  return 0;
    if(k1<root->val && k2<root->val){
        return distance(root->left,k1,k2);
    }
    if(k1>root->val && k2>root->val){
        return distance(root->right,k1,k2);
    }
    if(k1<=root->val && k2>=root->val){
        return RootToNode(root,k1) + RootToNode(root,k2);
    }
}
int main(){
    int arr[]={8,3,10,1,6,INT_MIN,14,INT_MIN,INT_MIN,4,7,13,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelOrderQueue(root);
    cout<<endl;
    int ans=distance(root,6,14);
    cout<<ans<<endl;
}