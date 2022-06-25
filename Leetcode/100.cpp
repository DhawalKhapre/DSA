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
    void preOrder(TreeNode* node, vector<int> &x)   {
        if(node == NULL)   {
            x.push_back((1e4) + 1);
            return;
        }

        x.push_back(node->val);

        preOrder(node->left, x);
        preOrder(node->right, x);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> vp;
        vector<int> vq;
        
        preOrder(p, vp);
        preOrder(q, vq);
        
        if(vp.size() != vq.size())  return false;
        
        for(int i=0; i<vp.size(); i++)
            if(vp[i] != vq[i])
                return false;
        
        return true;
    }
};