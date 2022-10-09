bool search(BinaryTreeNode<int>* left,BinaryTreeNode<int>*right)
{
    if(left==NULL && right==NULL )
        return true;
    if(left->data!=right->data)
        return false;
    return search(left->left,right->right) && search(left->right,right->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.  
    if(root==NULL)
        return true;
    return search(root->left,root->right);
}
