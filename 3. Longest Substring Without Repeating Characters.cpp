class Solution
{
    public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0, j;
        for (int i = 0; i < s.size(); i++)
        {
            map<char, int> mp;
            int cur = 0;
            for (j = i; j < s.size(); j++)
            {
                if (mp[s[j]])
                {
                    break;
                }
                else
                {
                    mp[s[j]]++;
                }
            }
            ans = max(ans, j - i);
        }
        return ans;
    }
};
