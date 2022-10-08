class Solution {
public:
    void inorder(TreeNode* node,map<int,map<int,multiset<int>>>&mp,int vertex,int level)
    {
        if(node==NULL)
            return ;
        mp[vertex][level].insert(node->val);
        inorder(node->left,mp,vertex-1,level+1);
        inorder(node->right,mp,vertex+1,level+1);
        
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
      map<int,map<int,multiset<int>>>mp;
       inorder(root,mp,0,0); 
        vector<vector<int>>ans;
       for(auto it:mp)
       {
           vector<int>v;
           for(auto p:it.second)
           {
               for(auto q:p.second)
               {
                   v.push_back(q);
               }
           }
           ans.push_back(v);
       }
        return ans;
    }
};
