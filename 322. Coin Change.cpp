﻿class Solution
{
    public:
    int coinChange(vector<int>& coins, int amount)
    {
        int dp[amount + 1];
        for (int i = 0; i <= amount; i++)
        {
            dp[i] = INT_MAX;
        }
        int n = coins.size();
        dp[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (coins[j] <= i)
                {
                    int curr = dp[i - coins[j]];
                    if (curr != INT_MAX && curr + 1 < dp[i])
                    {
                        dp[i] = curr + 1;
                    }
                }
            }
        }
        if (dp[amount] == INT_MAX)
        {
            return -1;
        }
        return dp[amount];
    }
};
