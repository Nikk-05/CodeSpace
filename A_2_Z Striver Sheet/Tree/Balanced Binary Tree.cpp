int check(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh=check(root->left);
        int rh=check(root->right);
        if(lh==-1||rh==-1 || abs(lh-rh)>1)
            return -1;
        return max(lh,rh)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        int ans;
        ans=check(root);
        if(ans==-1)
            return false;
        return true;
    }
