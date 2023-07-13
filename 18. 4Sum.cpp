class Solution
{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        int n = nums.size();
        set<vector<int>> ans;
        vector<int> v(4);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                for (int k = j + 1, l = n - 1; k < l;)
                {
                    long long int sum = 0;
                    sum += nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target)
                    {
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[k];
                        v[3] = nums[l];
                        ans.insert(v);
                        l--;
                    }
                    else if (sum > target)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
