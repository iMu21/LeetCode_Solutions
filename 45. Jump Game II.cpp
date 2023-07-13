class Solution
{
    public:
    int jump(vector<int>& nums)
    {
        if (nums.size() == 1) return 0;
        int curReach = 0;
        int jump = 0;
        int maxReach = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == curReach)
            {
                jump++;
                curReach = max(maxReach, i + nums[i]);
                maxReach = curReach;
                if (maxReach >= nums.size() - 1) return jump;
            }
            maxReach = max(maxReach, nums[i] + i);
            if (maxReach >= nums.size() - 1) return jump + 1;

        }

        return 0;
    }
};
