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
    void inorder(TreeNode* root, int target, bool& poss)    {
        if(!root)
            return;
        
        if(!root->left && !root->right)
            if(target-root->val == 0)
                poss = true;
        
        inorder(root->left, target-root->val, poss);
        inorder(root->right, target-root->val, poss);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        
        bool poss = false;
        inorder(root, targetSum, poss);
        
        return poss ? true : false;
    }
};