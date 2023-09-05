public class Solution {
    public int LongestOnes(int[] nums, int k) {
        var usedFlip = 0;
        var windowBeg = 0;
        var maxConsecutiveOne = 0;
        var curConsecutiveOne = 0;
        
        for(int i=0;i<nums.Length;i++)
        {
            if(nums[i]==1)
            {
                curConsecutiveOne++;
            }
            else{
                if(usedFlip<k){
                    usedFlip++;
                    curConsecutiveOne++;
                }
                else{
                    while(nums[windowBeg] != 0)
                    {
                        windowBeg++;
                        curConsecutiveOne--;
                    }
                    
                    windowBeg++;
                }
            }
            maxConsecutiveOne = Math.Max(maxConsecutiveOne, curConsecutiveOne);
        }
        
        return maxConsecutiveOne;
    }
}