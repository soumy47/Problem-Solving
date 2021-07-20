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
    
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int &index,  unordered_map<int,int> &mp, int start, int end)
    {
        if(start > end)
            return NULL;
        
        int root = postorder[index--];
        TreeNode* rootNode = new TreeNode(root);
        
        int pos = mp[root]; 
        rootNode->right = solve(inorder, postorder, index, mp, pos+1, end);
        rootNode->left = solve(inorder, postorder, index, mp, start, pos -1);
        return rootNode;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        
        int n = inorder.size();
        for(int i = 0;i<n ;i++)
        {
            mp[inorder[i]] = i;
        }
        int index = n-1;
        return solve(inorder, postorder, index, mp, 0, n-1);
        
    }
};
