class Solution
{
    public:
    int findDuplicate(vector<int>& nums)
    {
        bool arr[100002];
        memset(arr, false, sizeof(arr));
        for (int i = 0; i < nums.size(); i++)
        {
            if (arr[nums[i]]) return nums[i];

            arr[nums[i]] = true;
        }
        return 0;
    }
};
