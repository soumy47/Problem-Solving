class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int carry = 0;
        
        if(num1.size() < num2.size())
            swap(num1, num2);
    
        for(int i= num2.size() - 1; i >= 0 ; i--)
        {
            int last1 = num1.back() - '0';
            num1.pop_back();
            int last2 = num2.back() - '0';
            num2.pop_back();
            
            int sum = (last1 + last2 + carry) % 10;
            ans.push_back(sum + '0');
            
            carry = (last1 + last2 + carry)/10;
        }
        
        int pos = num1.size() - num2.size() - 1;
        for(int i = pos; i>=0; i--)
        {
            int last1 = num1.back() - '0';
            num1.pop_back();
            int sum = (last1  + carry) % 10;
            ans.push_back(sum + '0');
            
            carry = (last1 + carry)/10;
            
        }
        if(carry)
        {
            char c =  (carry % 10) + '0';
            ans.push_back(c);
            carry = carry /10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
