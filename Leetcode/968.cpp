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
    int search(TreeNode *root, int &count)  {
        if(!root)   return 1;
        int a = search(root->left, count);
        int b = search(root->right, count);
        
        if(a==0 || b==0)    {
            count++;
            return 2;
        }
        
        if(a==1 && b==1)    return 0;
        return 1;
    }
    
    int minCameraCover(TreeNode* root) {
        int count = 0;
        int x = search(root, count);
        if(x==0)    return count+1;
        
        return count;
    }
};