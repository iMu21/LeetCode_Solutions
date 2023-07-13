class Solution
{
    public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost)
    {
        int n = grid.size();
        int m = grid[0].size();
        int solution[n][m] ;
        for (int i = 0; i < m; i++)
        {
            solution[0][i] = grid[0][i];
        }
        for (int j = 1, i = 0; i < n - 1; i++, j++)
        {
            for (int k = 0; k < m; k++)
            {
                int val = INT_MAX;
                for (int l = 0; l < m; l++)
                {
                    int v = moveCost[grid[i][l]][k];
                    val = min(val, v + solution[i][l]);
                }
                solution[j][k] = val + grid[j][k];
            }
        }
        int ans = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            ans = min(ans, solution[n - 1][i]);
        }
        return ans;
    }
};
