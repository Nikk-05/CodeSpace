bool inorder(TreeNode*root,int node,vector<int>&ans)
{
    if(root==NULL) return false;
    
    ans.push_back(root->val);
    if(root->val==node) return true;

    bool x=inorder(root->left,node,ans);
    bool y=inorder(root->right,node,ans);
    if(x || y) return true;
    ans.pop_back();
    return false;
} 
 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    if(A==NULL) return ans;
  
    inorder(A,B,ans);
    return ans;
}
