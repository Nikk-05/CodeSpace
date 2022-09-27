 vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>nums;
        if(root==NULL)
            return nums;
        st.push(root);
        while(!st.empty())
        {
            TreeNode * curr=st.top();
            st.pop();
            nums.push_back(curr->val);
            if(curr->right)
            {
                st.push(curr->right);
            }
            if(curr->left)
            {
                st.push(curr->left);
            }
        }
        return nums;
    }
