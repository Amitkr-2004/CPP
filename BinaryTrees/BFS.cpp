#include<iostream>
#include<queue>
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
void nthLevel(Node* root,int curr,int levels){
    if(root==NULL)      return;
    if(curr==levels){
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left,curr+1,levels);
    nthLevel(root->right,curr+1,levels);
}
void nthLevelRev(Node* root,int curr,int levels){
    if(root==NULL)      return;
    if(curr==levels){
        cout<<root->val<<" ";
        return;
    }
    nthLevelRev(root->right,curr+1,levels);
    nthLevelRev(root->left,curr+1,levels);
}
int levels(Node* root){
    if(root==NULL)  return 0;
    int ans=1 + max(levels(root->left),levels(root->right));
    return ans;
}
void levelOrder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}
void levelOrderRev(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthLevelRev(root,1,i);
        cout<<endl;
    }
}

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

void levelOrderQueueRev(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL)    q.push(temp->right);
        if(temp->left!=NULL)    q.push(temp->left);
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    // levelOrderRev(a);
    cout<<endl;
    levelOrderQueueRev(a);
    cout<<endl;
}