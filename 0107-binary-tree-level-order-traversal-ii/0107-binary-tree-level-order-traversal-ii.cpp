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
    void traverse(TreeNode* root,vector<vector<int>>& res,int level){
        if(root==NULL)
            return;
        traverse(root->left,res,level+1);
        traverse(root->right,res,level+1);
        while(res.size() <= level)  // to create empty vector upto desired level
            res.push_back({});
       
        res[level].push_back(root->val);
        
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        traverse(root,res,0);
        reverse(res.begin(),res.end());
        return res;
    }
};