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
void HorLevel(Node* root,int &minLevel,int &maxLevel,int level){
    if(root==NULL)      return;
    minLevel=min(minLevel,level);
    maxLevel=max(maxLevel,level);
    HorLevel(root->left,minLevel,maxLevel,level-1);
    HorLevel(root->right,minLevel,maxLevel,level+1);
}
void topView(Node*root,vector<int> &ans,int level){
    if(root==NULL)  return;
    if(ans[level]==INT_MIN)     ans[level]=root->val;
    topView(root->left,ans,level-1);
    topView(root->right,ans,level+1);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    int maxLevel=0;
    int minLevel=0;
    HorLevel(root,minLevel,maxLevel,0);
    int TotalLevel=maxLevel-minLevel+1;
    vector<int>ans(TotalLevel,INT_MIN);
    topView(root,ans,-minLevel);
    for(int i=0;i<TotalLevel;i++){
        cout<<ans[i]<<" ";
    }
}