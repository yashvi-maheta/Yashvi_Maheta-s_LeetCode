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

    // void solve(TreeNode* node,int i,vector<vector<int>>& res)
    // {
    //     if(node == NULL)
    //         return;
    //     if(res.size()==i)
    //         res.push_back({});
    //     res[i].push_back(node->val);

    //     solve(node->left,i+1,res);
    //     solve(node->right,i+1,res);
    // }
    // vector<vector<int>> levelOrder(TreeNode* root) {
    //     vector<vector<int>> res;
        
    //     solve(root,0,res);
    //     return res;
    // }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q;
        TreeNode* curr;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            vector<int> level;
            for(int i=0;i<n;i++){
                curr=q.front();
                q.pop();
                level.push_back(curr->val);
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};