public class Solution {
    public bool IncreasingTriplet(int[] nums) {
        int[] minnArray = new int[nums.Length];
        var minn = nums[0];
        
        for(var i=0;i<nums.Length;i++){
            minnArray[i] = minn;
            minn = Math.Min(minn,nums[i]);
        }
        
        var maxx = nums[nums.Length-1];
        
        for(var i=nums.Length-2;i>=1;i--){
            if(nums[i]<maxx && nums[i]>minnArray[i])
                return true;
            maxx = Math.Max(maxx,nums[i]);
        }
        
        return false;
    }
}