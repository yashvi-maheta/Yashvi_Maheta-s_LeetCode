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
    // void solve(TreeNode* root,vector<int>& res)
    // {
    //     if(root==NULL)
    //         return;
    //     solve(root->left,res);
    //     res.push_back(root->val);
    //     solve(root->right,res);
    // }
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> res;
    //     if(root == NULL)
    //         return res;
    //     solve(root,res);
    //     return res;

    // }

    //iteratively ----

    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* curr;
        stack<TreeNode*> st;
        curr=root;
        vector<int> ans;
        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);

            curr=curr->right;
        }
        return ans;
    }


};

