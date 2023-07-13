class Solution
{
    public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> st;
        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1;
            int k = n - 1;
            while (j < k)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> v(3);
        v[0] = nums[i];
        v[1] = nums[j];
        v[2] = nums[k];
        st.insert(v);
        j++;
        k--;
    }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else
{
    k--;
}
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
return ans;
    }
};
