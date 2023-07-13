class Solution
{
    public:
    int singleNumber(vector<int>& nums)
    {
        int sum = 0;
        int dubsum = 0;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            mp[nums[i]]++;
            if (mp[nums[i]] == 2) dubsum += nums[i];
        }
        return sum - (dubsum * 2);
    }
};
