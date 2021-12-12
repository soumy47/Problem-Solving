class Solution {
public:
    int minimumRefill(vector<int>& nums, int capA, int capB) {
        int n = nums.size();
        int ca = capA, cb = capB;
        int i = 0;
        int j  = n - 1;
        int refill= 0;
        //i = alice
        //j = bob
        while(i <= j)
        {
            if(i == j){
                
                int cap = 0;
                if(capA > capB)
                    cap = capA;
                else
                    cap = capB;
                //cout<< cap<< " "<<nums[i]<<"\n";
               if(cap < nums[i])
                    refill++;
                break;
            }
            else
            {
                //alice
                if(capA >= nums[i])
                    capA-= nums[i];
                else{
                    capA = ca- nums[i];
                    refill++;
                }
                
                //bob
                if(capB >= nums[j])
                    capB-= nums[j];
                else{
                   // cout<< nums[j];
                    capB = cb- nums[j];
                    refill++;
                }
            }
            i++;
            j--;
        }
        return refill;
    }
};
