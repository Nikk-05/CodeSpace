 void preorder(TreeNode* root,vector<int>&nums)
    {
        if(root==NULL)
          return ;
        nums.push_back(root->val);
        preorder(root->left,nums);
        preorder(root->right,nums);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>nums;
       if(root==NULL)
           return nums;
        preorder(root,nums);
        return nums;
    }
