                                              SINGLE ELEMENT IN SORTED ARRAY

#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
        int high,low;
        
        high = nums.size()-2;
            // in case the element is present in the last index eg. 1 1 2 2 3 3 4 4 6
           //then our left part will shirnk and low will automatically points to the single element.
        low = 0;    
           
        while(low <= high){
                int mid = low + (high - low)/2;
                
            
           
            // in left part 1st instance is at even index and 2nd is at odd index 
            // eg.      1 1 2 3 3 4 4 
            // index    0 1 2 3 4 5 6 

                // if mid is odd, mid^1 gives previous even index.
                // else gives the odd indx just after it
                if(nums[mid] == nums[mid^1]) 
                {
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        return nums[low];
            
    }
    int main(){
      vector<int> v = {1, 1, 2, 3, 3, 4, 4};
      cout<<singleNonDuplicate(v);
      return0;
    }



