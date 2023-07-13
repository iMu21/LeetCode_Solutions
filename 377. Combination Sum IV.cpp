class Solution
{
    public:
    int combinationSum4(vector<int>& nums, int target)
    {
        unsigned int dp[target + 1];
        int n = nums.size();
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 0; i <= target; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + nums[j] <= target)
                {
                    dp[i + nums[j]] += dp[i];
                }
            }
            cout << dp[i] << endl;
        }
        return int(dp[target]);
    }
};
