class Solution {
public:
    
   void dfs(int i , int j, int old , int newColor, vector<vector<int>>& image)
    {
        int row = image.size();
        int col = image[0].size();
        
        if(i >=0  && i<row  && j >=0 && j<col &&  (image[i][j] == old))
        {
            image[i][j] = newColor;
            
            dfs(i + 1, j, old, newColor, image);
            dfs(i - 1, j, old, newColor, image);
            dfs(i, j + 1, old, newColor, image);
            dfs(i, j - 1, old, newColor, image);
            
        }
    }
 
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int row = image.size();
        int col = image[0].size();
        
        int old = image[sr][sc];
        
        if(old != newColor)
        dfs(sr, sc, old, newColor, image);
        
        return image;
    }
};
