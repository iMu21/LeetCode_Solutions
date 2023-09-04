public class Solution {
    public void MoveZeroes(int[] nums) {
        int zeroPos = 0;
        int nonZeroPos = 0;
        
        while(nonZeroPos<nums.Length && zeroPos<nums.Length)
        {
            if(nums[zeroPos]==0 && nums[nonZeroPos]!=0 && zeroPos<nonZeroPos)
            {
                nums[zeroPos] = nums[nonZeroPos];
                nums[nonZeroPos] = 0;
            }

            if(nums[zeroPos]!=0){
                zeroPos++;
            }
            if(nums[nonZeroPos]==0 || nonZeroPos<=zeroPos){
                nonZeroPos++;
            }
            
        }
    }
}