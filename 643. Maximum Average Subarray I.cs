public class Solution {
    public double FindMaxAverage(int[] nums, int k) {
        double curSumOfKValues = 0.0;
        double maxSumOfKValues = 0.0;
        
        for(int i=0;i<k;i++)
        {
            curSumOfKValues += nums[i];
        }
        
        maxSumOfKValues = curSumOfKValues;
        
        for(int i=k;i<nums.Length;i++)
        {
            curSumOfKValues = curSumOfKValues - nums[i-k] + nums[i];
            maxSumOfKValues = Math.Max(curSumOfKValues, maxSumOfKValues);
        }
        
        return maxSumOfKValues/k;
    }
}
