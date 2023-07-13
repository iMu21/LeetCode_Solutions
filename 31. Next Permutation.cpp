class Solution
{
    public:
    void nextPermutation(vector<int>& nums)
    {
        int pos = -1;
        for (int i = nums.size() - 1; 1 <= i; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                pos = i - 1;
                break;
            }
        }
        //cout<<pos<<endl;
        if (pos != -1)
        {
            int hold = pos + 1;
            int mn = nums[hold];
            for (int i = hold + 1; i < nums.size(); i++)
            {
                if (mn > nums[i] && nums[pos] < nums[i])
                {
                    hold = i;
                }
            }

            int c = nums[hold];
            nums[hold] = nums[pos];
            nums[pos] = c;
        }
        sort(nums.begin() + pos + 1, nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
    }
};