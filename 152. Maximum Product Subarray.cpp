class Solution
{
    public:
    int maxProduct(vector<int>& nums)
    {
        int currentMaxEnding = nums[0];
        int currentMinEnding = nums[0];
        int maxProduct = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            int cur = currentMaxEnding;
            currentMaxEnding = max(currentMaxEnding * nums[i], max(currentMinEnding * nums[i], nums[i]));
            currentMinEnding = min(cur * nums[i], min(currentMinEnding * nums[i], nums[i]));
            maxProduct = max(maxProduct, currentMaxEnding);
        }
        return maxProduct;

    }
};
