class Solution
{
    public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if (obstacleGrid[0][0] == 1) return 0;
        if (obstacleGrid[n - 1][m - 1]) return 0;

        obstacleGrid[0][0]--;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0) continue;

                if (obstacleGrid[i][j] != 1)
                {
                    if (i - 1 >= 0)
                    {
                        if (obstacleGrid[i - 1][j] < 0)
                        {
                            obstacleGrid[i][j] += obstacleGrid[i - 1][j];
                        }
                    }
                    if (j - 1 >= 0)
                    {
                        if (obstacleGrid[i][j - 1] < 0)
                        {
                            obstacleGrid[i][j] += obstacleGrid[i][j - 1];
                        }
                    }
                }
            }
        }
        return obstacleGrid[n - 1][m - 1] * (-1);
    }
};
