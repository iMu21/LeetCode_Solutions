class Solution
{
    public:
    int singleNumber(vector<int>& nums)
    {
        long long int sum = 0;
        long long int tripsum = 0;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            mp[nums[i]]++;
            if (mp[nums[i]] == 3) { tripsum += nums[i]; }
        }
        return sum - (tripsum * 3);
    }
};
