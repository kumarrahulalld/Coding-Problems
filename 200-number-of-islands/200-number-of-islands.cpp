class Solution {
public:
    void helper(vector<vector<char>>& grid, int i, int j, int m, int n)
    {
        grid[i][j] = '2';
        if(i-1 >= 0 && grid[i-1][j] != '0' && grid[i-1][j] != '2') {helper(grid, i-1, j, m, n);}
        if(j-1 >= 0 && grid[i][j-1] != '0' && grid[i][j-1] != '2') {helper(grid, i, j-1, m, n);}
        if(i+1 < m && grid[i+1][j] != '0' && grid[i+1][j] != '2')  {helper(grid, i+1, j, m, n);}
        if(j+1 < n && grid[i][j+1] != '0' && grid[i][j+1] != '2')  {helper(grid, i, j+1, m, n);}
        grid[i][j] = '0';
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int row = grid.size();
        int col = grid[0].size();
        for(int i=0; i<grid.size(); i++){
            vector<char> :: iterator it;
            it = find(grid[i].begin(), grid[i].end(), '1');
            if(it == grid[i].end()) {continue;}
            else{
                int j = it - grid[i].begin(); 
                helper(grid, i, j, row,col);
                count++;
                i--;
            }
        }
        return count;}};