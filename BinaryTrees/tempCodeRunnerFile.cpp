void preorder(Node* root){      //root left right
    if(root==NULL)      return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}