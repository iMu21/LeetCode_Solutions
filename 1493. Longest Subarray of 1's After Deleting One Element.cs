public class Solution {
    public int LongestSubarray(int[] nums) {
        bool haveZero = false;
        int prev = 0;
        int cur = 0;
        int longest = 0;
        for(int i=0;i<nums.Length;i++)
        {
            if(nums[i]==0)
            {
                haveZero = true;
                longest = prev + cur > longest? prev + cur : longest;
                prev = cur;
                cur = 0;
            }
            else{
                cur++;
            }
        }
        
        if(cur!=0)
        {
            longest = prev + cur > longest? prev + cur : longest;
        }
        
        if(!haveZero)
            return nums.Length-1;
        
        return longest;
    }
}
