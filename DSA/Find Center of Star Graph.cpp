class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int m = edges[0].size();
        
        int res = edges[0][1];
        
        if( (edges[0][0] == edges[1][0]) || ( edges[0][0] == edges[1][1]) ){
            res = edges[0][0];
        }
        return res;
    }
};Find Center of Star Graph.cpp
