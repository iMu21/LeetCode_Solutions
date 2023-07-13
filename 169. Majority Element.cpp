class Solution
{
    public:
    int majorityElement(vector<int>& nums)
    {
        int mx = (nums.size() / 2);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < mx + 1; i++)
        {
            if (nums[i] == nums[i + mx]) { return nums[i]; }
        }
        return 0;
    }
};
