// Using stack first run a loop and go left untill you got NULL after that start putting value into array and go to right of every element.
vector<int> inorderTraversal(TreeNode* root) {
        vector<int>nums;
        stack<TreeNode*>st;
        TreeNode * node=root;
        while(true)
        {
            if(node!=NULL)
            {
                st.push(node);
                node=node->left;
            }
            else
            {
                if(st.empty())
                    break;
                node=st.top();
                st.pop();
                nums.push_back(node->val);
                node=node->right;
            }
        }
        return nums;
    }
