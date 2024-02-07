#include<iostream>
#include<queue>
#include<climits>
#include<map>
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
vector<int> bottom_view(Node* root,vector<int> &ans){
    map<int,int> mp;          //<level,node>
    queue< pair<Node*,int>  > q;
    q.push({root,0});
    while(q.size()>0){
        pair<Node*,int> p=q.front();
        Node* temp=p.first;
        int level=p.second;
        q.pop();
        mp[level]=temp->val;
        if(temp->left)   q.push({temp->left,level-1});
        if(temp->right)   q.push({temp->right,level+1});
    }
    for(auto x:mp){
        ans.push_back(x.second);
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelOrderQueue(root);
    cout<<endl;

    vector<int> ans;
    bottom_view(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}