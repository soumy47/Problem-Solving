class Solution {
public:
    int minCostToMoveChips(vector<int>& position) 
    {    
        int minCost = INT_MAX;
        int n = position.size(); 
        for(int  i= 0 ; i< n ; i++)
        {
              int temp_cost = 0;
              for(int j =0; j< n ; j++)
              {
                 temp_cost += abs(position[j] -position[i] ) % 2;
              }
              minCost = min(temp_cost, minCost);
        }
        return minCost;
    }
};
