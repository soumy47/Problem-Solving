class Solution{
public:
    vector<int> maxSumSequence(int n, int arr[])
    {
        vector<int> LIS(n);
	    LIS[0] = arr[0];
	    
	    for(int i=1; i<n ;i++)
	    {
	        LIS[i] = arr[i];
	        for(int j =0; j<i ; j ++)
	        {
	            if( arr[i] > arr[j] && LIS[j] + arr[i] > LIS[i])
	            { 
	                LIS[i] =arr[i] + LIS[j];
	            }
	        }
	    }
        
        int maxIndex=0, val = LIS[0];
        for(int i = 1; i< n; i++)
        {
            if(LIS[i] > val)
            {
                maxIndex = i;
                val  = LIS[i];
            }
        }
        vector<int > ans;
        ans.push_back(arr[maxIndex]);
        
        for(int  i = maxIndex -1; i>=0; i--)
        {
            if(arr[i] < arr[maxIndex]   && LIS[i] + arr[maxIndex] == LIS[maxIndex])
            {
                ans.push_back(arr[i]);
                maxIndex = i;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
