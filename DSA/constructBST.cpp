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
    TreeNode* insert(vector<int> &preorder, int *index, int key, int mn, int mx, int n){
        
        if(*index >= n)
            return NULL;
        TreeNode* node = NULL;
        if(key > mn && key < mx){
           node = new TreeNode(key);
            (*index)++;
            if(*index < n) 
                node->left = insert(preorder, index, preorder[*index], mn, key, n);
            
            if(*index < n)
                node ->right = insert(preorder, index, preorder[*index], key, mx, n);
        }
       return node;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return insert(preorder, &index, preorder[0], INT_MIN, INT_MAX, preorder.size());
        
    }
};
