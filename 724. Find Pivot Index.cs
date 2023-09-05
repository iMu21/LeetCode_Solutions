public class Solution {
    public int PivotIndex(int[] nums) {
        var cumSum = 0;
        foreach(var num in nums)
        {
            cumSum+=num;
        }
        
        var curSum = 0;
        var pos = 0;
        foreach(var num in nums){
            if(curSum == cumSum-curSum-num)
                return pos;
            
            pos++;
            curSum+=num;
        }
        
        return -1;
    }
}
