class Solution
{
    public:
    int firstMissingPositive(vector<int>& nums)
    {
        set<int> s(nums.begin(), nums.end());
        int ans = 1;
        set<int>:: iterator it;


        for (it = s.begin(); it != s.end(); it++)
        {
            if (*it == ans) ans++;
        }
        return ans;
    }
};
