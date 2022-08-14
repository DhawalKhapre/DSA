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
    TreeNode* solve(vector<int>& nums, int l, int r)    {
        if(l > r)
            return NULL;
        int m = (l+r)/2;
        
        TreeNode* root = new TreeNode(nums[m]);
        TreeNode* lt = solve(nums, l, m-1);
        TreeNode* rt = solve(nums, m+1, r);
        
        root->left = lt;
        root->right = rt;
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        
        return solve(nums, l, r);
    }
};