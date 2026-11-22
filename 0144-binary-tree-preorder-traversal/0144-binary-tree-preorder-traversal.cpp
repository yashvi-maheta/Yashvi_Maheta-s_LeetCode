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
    // void traverse(TreeNode* node,vector<int>& res)
    // {
    //     if(node==NULL)
    //         return;
    //     res.push_back(node->val);
    //     traverse(node->left,res);
    //     traverse(node->right,res);
    //     return;
        
    // }
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> res;
    //     if(root == NULL)
    //         return res;
    //     traverse(root,res);
    //     return res;
    // }

    // iteratively -------------

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        stack<TreeNode*>st;
        TreeNode* curr;
        st.push(root);
        while(!st.empty()){
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            if(curr->right!=NULL)
                st.push(curr->right);
            if(curr->left !=NULL)
                st.push(curr->left);
        }
        return ans;
    }
};