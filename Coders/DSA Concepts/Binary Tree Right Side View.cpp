class Solution {
    private: 
    void recursion(TreeNode* node , int level , vector<int>& res)
    {
        if(node==NULL)
        {
            return;
        }
        
        if(res.size()==level)
        {
            res.push_back(node->val);
        }
        recursion(node->right , level+1 , res);
        recursion(node->left , level+1, res);
    }
     
public:
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        recursion(root,0,ans);
        return ans;
        
    }
};