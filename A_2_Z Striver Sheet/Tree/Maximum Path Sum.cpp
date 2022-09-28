int path(TreeNode* root,int &maxi)
    {
        if(root==NULL)
            return 0;
        int lh=max(0,path(root->left,maxi));
        int rh=max(0,path(root->right,maxi));
        maxi=max(maxi,root->val+lh+rh);
        
        return root->val+max(lh,rh);
    }
    
    
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        path(root,maxi);
        return maxi;
    }
