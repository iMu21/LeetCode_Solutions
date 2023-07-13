class Solution
{
    public:
    int rob(vector<int>& nums)
    {
        int n = nums.size();
        if (n == 0) { return 0; }
        if (n == 1) { return nums[0]; }
        if (n == 2) { return max(nums[0], nums[1]); }

        int dp[n][2];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 0;
        dp[0][1] = nums[0];
        for (int i = 1; i < n - 1; i++)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = dp[i - 1][0] + nums[i];
        }

        int ans1 = max(dp[n - 2][1], dp[n - 2][0]);

        memset(dp, 0, sizeof(dp));
        dp[1][0] = 0;
        dp[1][1] = nums[1];
        for (int i = 2; i < n; i++)
        {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = dp[i - 1][0] + nums[i];
        }

        int ans2 = max(dp[n - 1][1], dp[n - 1][0]);
        return max(ans1, ans2);

    }
};
