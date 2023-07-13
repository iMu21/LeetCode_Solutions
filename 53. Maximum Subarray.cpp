class Solution
{
    public:
    int maxSubArray(vector<int>& nums)
    {
        int mxSum = 0;
        int curr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            curr += nums[i];
            mxSum = max(mxSum, curr);
            if (curr < 0)
            {
                curr = 0;
            }
        }
        sort(nums.rbegin(), nums.rend());
        if (nums[0] < 0)
        {
            return nums[0];
        }
        return mxSum;
    }
};