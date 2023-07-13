class Solution
{
    public:
    bool wordBreak(string s, vector<string>& wordDict)
    {
        int n = s.size();
        bool dp[n + 1];
        memset(dp, false, sizeof(dp));
        dp[0] = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (dp[i] == true)
            {
                for (int j = 0; j < wordDict.size(); j++)
                {
                    if (n - i >= wordDict[j].size())
                    {
                        int flag = 1;
                        for (int currj = 0, curri = i; currj < wordDict[j].size(); curri++, currj++)
                        {
                            if (wordDict[j][currj] != s[curri])
                            {
                                flag = 0;
                            }
                        }
                        if (flag == 1)
                        {
                            dp[i + wordDict[j].size()] = true;
                        }
                    }
                }
            }
        }
        if (dp[n] == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
