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
    
    int height(TreeNode* root, int &res)
    {
        if(!root)
            return 0;
        int left = height(root->left, res);
        int right = height(root->right, res);
        
        if( left + right > res)
            res = left + right ;
        return max(left , right) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        height(root,res);
        return res;
    }
};
