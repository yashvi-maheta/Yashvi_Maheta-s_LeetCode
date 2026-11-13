/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void solve(TreeNode* node,int i,vector<vector<int>>& res)
    {
        if(node == NULL)
            return;
        if(res.size()==i)
            res.push_back({});
        res[i].push_back(node->val);

        solve(node->left,i+1,res);
        solve(node->right,i+1,res);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        
        solve(root,0,res);
        return res;
    }
};