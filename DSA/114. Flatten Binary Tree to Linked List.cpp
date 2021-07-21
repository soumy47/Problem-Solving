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
    void flatten(TreeNode* R) {
        if(!R)
            return;
        
        TreeNode* root = R;
        while(root)
        {
            if(root->left)
            {
                TreeNode *Left = root->left;
                TreeNode *curr = Left;
                
                while(curr->right)
                {
                    curr = curr->right;
                }
                curr->right = root->right;
                root->left = NULL;
                root->right = Left;
            }
            root = root->right;
        }
        return;
    }
};
