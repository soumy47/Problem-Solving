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
    int solve(TreeNode *node, bool &bal)
    {
        if(!node  || !bal)
        {
            return 0;
        }
        
        // left height
        int lheight = solve(node->left, bal);
        
        
        //right height
        int rheight = solve(node->right, bal);
        
        if(abs(lheight - rheight) > 1)
          { 
            bal =  false;
          }
     
         return max(lheight, rheight) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
      bool isbalanced = true;
      solve(root, isbalanced);
      return isbalanced;
    }
};
