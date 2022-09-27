// Using Two stack.....
 vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        vector<int>nums;
        if(root==NULL)
            return nums;
        st1.push(root);
        while(!st1.empty())
        {
            TreeNode* curr=st1.top();
            st1.pop();
            st2.push(curr);
            if(curr->left!=NULL)
            {
                st1.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                st1.push(curr->right);
            }
        }
        while(!st2.empty())
        {
            nums.push_back(st2.top()->val);
            st2.pop();
        }
        return nums;
    }
