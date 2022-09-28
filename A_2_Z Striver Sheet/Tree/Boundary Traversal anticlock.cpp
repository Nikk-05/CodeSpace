bool isLeaf(TreeNode<int>*root)
{
    if(root->left==NULL && root->right==NULL)
        return true;
    return false;
}

void leftgo(TreeNode<int>*root,vector<int>&res)
{
    TreeNode<int>*curr=root;
    while(curr)
    {
        if(!isLeaf(curr))
            res.push_back(curr->data);
        if(curr->left!=NULL)
        {
            curr=curr->left;  
        }
        else 
            curr=curr->right;
    }
}

void rightgo(TreeNode<int>*root,vector<int>&res)
{
    TreeNode<int>*curr=root;
    vector<int>temp;
    while(curr)
    {
        if(!isLeaf(curr))
            temp.push_back(curr->data);
        if(curr->right!=NULL)
        {
            curr=curr->right;  
        }
        else 
            curr=curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        res.push_back(temp[i]);
    }
}

void leaf(TreeNode<int>*root,vector<int>&res)
{
    TreeNode<int>*curr=root;
    if(isLeaf(root))
    {
        res.push_back(root->data);
        return ;
    }
    if(root->left!=NULL)
        leaf(root->left,res);
    if(root->right!=NULL)
        leaf(root->right,res);
}


vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int>res;
    if(root==NULL)
        return res;
    
    if(!isLeaf(root))
    res.push_back(root->data);
    
    leftgo(root->left,res);
    leaf(root,res);
    rightgo(root->right,res);
    
    return res;
    
}
