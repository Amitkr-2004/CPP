#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
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
void LeftTree(Node* root,vector<int> &result){
    if(root==NULL)  return;

    if(root->left==NULL and root->right==NULL)      return;

    result.push_back(root->val);
    LeftTree(root->left,result);
    if(root->right==NULL)   LeftTree(root->right,result);
}

void BottomTree(Node* root,vector<int> &result){
    if(root==NULL)  return;

    if(root->left==NULL and root->right==NULL)  result.push_back(root->val);

    BottomTree(root->left,result);
    BottomTree(root->right,result);
}

void RightTree(Node* root,vector<int> &result){
    if(root==NULL)  return;

    if(root->left==NULL and root->right==NULL)      return;

    RightTree(root->right,result);
    if(root->right==NULL)   RightTree(root->left,result);
    result.push_back(root->val);
}
void Boundary(Node* root,vector<int> &result){
    LeftTree(root,result);
    BottomTree(root,result);
    RightTree(root,result);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    cout<<endl;
    vector<int> result;
    Boundary(root,result);

    for(int i=0;i<result.size()-1;i++){
        cout<<result[i]<<" ";
    }
}