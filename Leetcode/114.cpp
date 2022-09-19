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
    void preOrder(TreeNode* root, vector<int>& v)   {
        if(!root)
            return;
        v.push_back(root->val);
        preOrder(root->left, v);
        preOrder(root->right, v);
    }
    
    void flatten(TreeNode* root) {
        if(!root)
            return;
        
        vector<int> v;
        
        preOrder(root, v);
        
        TreeNode* head = root;
        
        for(int i=1; i<v.size(); i++)   {
            head->left = NULL;
            head->right = new TreeNode(v[i]);
            head = head->right;
        }
    }
};