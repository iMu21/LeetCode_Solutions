class Solution
{
    public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int suff[nums.size()];
        int preff[nums.size()];
        vector<int> ans;
        ans.resize(nums.size());
        int sf = 1, pf = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            pf *= nums[i];
            sf *= nums[nums.size() - i - 1];
            preff[i] = pf;
            suff[nums.size() - i - 1] = sf;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0) { ans[i] = suff[1]; }
            else if (i == nums.size() - 1) { ans[i] = preff[nums.size() - 2]; }
            else
            {
                ans[i] = preff[i - 1] * suff[i + 1];
            }
        }

        return ans;
    }
};
