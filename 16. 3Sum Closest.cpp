class Solution
{
    public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());
        int currSum = 1e9;
        int mn = 1e9;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int start = i + 1;
            int endd = nums.size() - 1;
            while (start < endd)
            {
                if (abs(nums[i] + nums[start] + nums[endd] - target) < mn)
                {
                    mn = abs(nums[i] + nums[start] + nums[endd] - target);
                    currSum = nums[i] + nums[start] + nums[endd];
                }
                if (nums[i] + nums[start] + nums[endd] < target)
                {
                    start++;
                }
                else
                {
                    endd--;
                }
            }
        }
        return currSum;
    }
};
