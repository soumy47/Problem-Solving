class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n= nums.size();  vector<string> ans;
        if(n == 0)
            return ans;
      
        
        int i = 1;
        int x = nums[0];
        int y = x;
        while(i < n)
        {
            if(nums[i-1] + 1 == nums[i]){
                y = nums[i++];
            }
            else
            {
                string s;
                if(x == y)
                {
                    s += to_string(y );
                }
               
                else
                {
                    s +=  to_string(x);
                    s += "->";
                    s += to_string(y);
                }
                
                ans.push_back(s);
                x = y = nums[i++]; 
            }
          
        }   
        string s;
        if(x == y)
          s += to_string(y );       
        else
            {
                s +=  to_string(x);
                s += "->";
                s += to_string(y);
            }
            ans.push_back(s);
        return ans;
    }
};
