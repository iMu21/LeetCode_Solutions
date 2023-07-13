class Solution
{
    public:
    int numDecodings(string s)
    {
        int n = s.size();
        unsigned int dp[n + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            int a = s[i - 1] - 48;
            if (a != 0)
            {
                dp[i] += dp[i - 1];
            }
            if (i + 1 <= n)
            {
                int b = s[i] - 48;
                b += (a * 10);
                if (b > 9 && b < 27) dp[i + 1] += dp[i - 1];
            }

        }
        return dp[n];
    }
};
