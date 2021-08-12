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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
            if(!root)
                return ans;
        
        deque<TreeNode*> dq;
        dq.push_front(root);
        int fg = 1;  //left to right
        while(!dq.empty())
        {
            vector<int> v;
            int n = dq.size();
            while(n--)
            {
                if(fg == 1)
                {
                        TreeNode *node = dq.front();  dq.pop_front();
                        v.push_back(node->val);
                      
                        if(node->left)
                            dq.push_back(node->left);
                        if(node->right)
                            dq.push_back(node->right);
                }
                else
                {
                        TreeNode *node = dq.back();  dq.pop_back();
                        v.push_back(node->val);
                        
                         if(node->right)
                            dq.push_front(node->right);   
                         if(node->left)
                            dq.push_front(node->left);
                }
            } 
            ans.push_back(v);
            fg = 1 - fg; 
        }
        return ans;
    }
};
