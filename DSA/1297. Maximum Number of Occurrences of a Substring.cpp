
class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        
int n = s.size();
        
        map<string, int> freq;
        map<char, int> dist;
        int k = minSize;
        int ans = 0;
        
        int start = 0;
        for(int i =0; i< n; i++)
        {
            dist[s[i]]++;
            
            if(i - start + 1 > k)//shisting the window
            {
                dist[s[start]]--;
                if(dist[s[start]] == 0)
                {
                    dist.erase(s[start]);
                }
                start++;
            }
            
            if(i - start + 1 == k && dist.size() <= maxLetters)
            {
                int occur = ++freq[s.substr(start, k)];
                ans = max(ans, occur);
            }
        }
        
        return ans;
    }
};
