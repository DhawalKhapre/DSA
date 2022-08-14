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
    void solve(TreeNode* root, int& sum, int temp)    {
        if(!root)
            return;
        
        if(!root->left && !root->right) {
            sum += (temp*10)+root->val;
            return;
        }
        
        solve(root->left, sum, (temp*10)+root->val);
        solve(root->right, sum, (temp*10)+root->val);
    }
    
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        
        solve(root, sum, 0);
        
        return sum;
    }
};