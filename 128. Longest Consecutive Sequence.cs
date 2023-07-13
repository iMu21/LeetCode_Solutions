public class Solution
{
    public int LongestConsecutive(int[] nums)
    {
        var newHash = new HashSet<int>(nums);

        int maxLen = 0;
        foreach (int num in nums)
        {
            if (!newHash.Contains(num - 1))
            {
                int currLen = 1;
                while (newHash.Contains(num + currLen))
                {
                    currLen++;
                }
                maxLen = Math.Max(maxLen, currLen);
            }
        }
        return maxLen;
    }
}
