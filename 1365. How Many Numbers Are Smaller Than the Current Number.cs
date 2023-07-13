public class Solution
{
    public int[] SmallerNumbersThanCurrent(int[] nums)
    {

        int[] weight = new int[101];

        for (int i = 0; i < 101; i++)
        {
            weight[i] = 0;
        }

        for (int i = 0; i < nums.Length; i++)
        {
            weight[nums[i]]++;
        }

        for (int i = 1; i < 101; i++)
        {
            weight[i] = weight[i - 1] + weight[i];
        }

        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] != 0)
            {
                nums[i] = weight[nums[i] - 1];
            }
        }

        return nums;
    }
}
