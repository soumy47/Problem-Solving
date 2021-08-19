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
    long long Sum(TreeNode *root)
    {
        if(!root)
            return 0;
        return Sum(root->left) + Sum(root->right) + root->val;
    }
    
    long long solve(TreeNode* root, long long sum, long long &res){
        if(!root)
            return 0;
        
        long long ans = solve(root->left, sum , res) +                                       solve(root->right, sum, res) + root->val;
        
        res = max(res, (sum - ans) * ans);
        
        return ans;
    }
    
    int maxProduct(TreeNode* root) {
        
        long long res = 0;  
        
        long long sum = Sum(root);//sum of the tree
      
        solve(root, sum, res);
       
        res = res % 1000000007;
        return res;
    }
};
