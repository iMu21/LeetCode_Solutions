public class Solution
{
    public IList<int> LargestDivisibleSubset(int[] nums)
    {
        int n = nums.Length;
        int[] dp = new int[n + 1];
        Array.Fill(dp, 1);
        int[] hash = new int[n + 1];
        Array.Sort(nums);
        int maxi = 1;
        int lastIndex = 0;

        for (int i = 0; i < n; i++)
        {
            hash[i] = i;
            for (int prev = 0; prev < i; prev++)
            {
                if (nums[i] % nums[prev] == 0 && 1 + dp[prev] > dp[i])
                {
                    dp[i] = 1 + dp[prev];
                    hash[i] = prev;
                }
            }
            if (dp[i] > maxi)
            {
                maxi = dp[i];
                lastIndex = i;
            }
        }
        List<int> ans = new List<int>();
        ans.Add(nums[lastIndex]);
        while (hash[lastIndex] != lastIndex)
        {
            lastIndex = hash[lastIndex];
            ans.Add(nums[lastIndex]);
        }

        return ans;
    }
}
