class Solution
{
    public:
    int removeDuplicates(vector<int>& nums)
    {
        set<int> l(nums.begin(), nums.end());

        int j = 0;
        set<int> :: iterator it;
        for (it = l.begin(); it != l.end(); it++)
        {
            nums[j] = *it;
            j++;
        }

        return j;
    }
};
