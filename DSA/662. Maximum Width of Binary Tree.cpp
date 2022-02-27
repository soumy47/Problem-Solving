class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) 
    {    
        if(!root)
            return 0;
        queue<pair<TreeNode*, unsigned int>> q;
       unsigned int ans = 0, l ,r;
        q.push({root, 1});
        
        while(q.size())
        {
            int n = q.size();    
            l = q.front().second; // position of the parent node
            r = l;
            for(int i = 0; i< n ; i++)
            {    
                TreeNode* top = q.front().first;
               unsigned int idx = q.front().second;
                q.pop();
                
                r = idx;
                if(top->left)                
                    q.push({top->left, 2*idx});
                if(top->right)
                    q.push({top->right, 2*idx + 1 });
                
            }
            ans = max(r - l + 1, ans);
        }
        return ans;
    
    }
};
