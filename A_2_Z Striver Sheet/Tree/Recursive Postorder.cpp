 void preorder(TreeNode* root,vector<int>&nums)
    {
        if(root==NULL)
          return ;
        preorder(root->left,nums);
        preorder(root->right,nums);
        nums.push_back(root->val);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>nums;
       if(root==NULL)
           return nums;
        preorder(root,nums);
        return nums;
    }
