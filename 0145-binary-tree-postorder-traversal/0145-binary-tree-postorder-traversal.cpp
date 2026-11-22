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
    // void traverse(TreeNode* node, vector<int>& res)
    // {
    //     if(node==NULL)
    //         return;
    //     traverse(node->left,res);
    //     traverse(node->right,res);
    //     res.push_back(node->val);
    // }
    // vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int> res;
    //     traverse(root,res);
    //     return res;
    // }

    // iteratively -------------

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        stack<TreeNode*> s1,s2;
        TreeNode* curr;
        s1.push(root);
        while(!s1.empty()){
            curr=s1.top();
            s1.pop();
            s2.push(curr);
            if(curr->left!=NULL) 
                s1.push(curr->left);
            if(curr->right!=NULL)
                s1.push(curr->right);
        }
        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }
};