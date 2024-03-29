void inorder(TreeNode* root,vector<int>&v)
    {
        if(!root)
            return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        return ;
    }

 vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        if(!root)
            return v;
        inorder(root,v);
        return v;   
    }
