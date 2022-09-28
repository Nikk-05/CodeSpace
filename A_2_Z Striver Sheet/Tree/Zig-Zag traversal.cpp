 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>zig_zag;
        if(root==NULL)
            return zig_zag;
        queue<TreeNode*>q;
        bool left_to_right=true;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            vector<int>ds(count);
            for(int i=0;i<count;i++)
            {
                TreeNode*curr=q.front();
                q.pop();
                
                int ind=(left_to_right)? i: (count-1-i);
                ds[ind]=curr->val;
                
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                } 
            }
            left_to_right=!left_to_right;
            zig_zag.push_back(ds);
        }
        return zig_zag;
    }
