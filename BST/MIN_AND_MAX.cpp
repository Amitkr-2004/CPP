#include<iostream>
#include<queue>
#include<climits>
#include<vector>
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
void inOrder(Node* root,vector<int> &extreme){
    if(root==NULL)  return;
   inOrder(root->left,extreme);
   extreme.push_back(root->val);
   inOrder(root->right,extreme);
}
int main(){
    int arr[]={4,2,5,1,3,INT_MIN,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    vector<int> extreme;
    inOrder(root,extreme);
    cout<<"Min value is "<< extreme[0]<<endl; 
    cout<<"Max value is "<< extreme[extreme.size()-1]<<endl; 
    cout<<endl;
}