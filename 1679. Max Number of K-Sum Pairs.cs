public class Solution {
    public int MaxOperations(int[] nums, int k) {
        Array.Sort(nums);
        
        int begg = 0;
        int endd = nums.Length-1;
        int maxOperation = 0;
        
        while(begg<endd){
            if(nums[begg]+nums[endd] == k)
            {
                maxOperation++;
                begg++;
                endd--;
            }
            else if(nums[begg]+nums[endd] > k)
            {
                endd--;
            }
            else{
                begg++;
            }
        }
        
        return maxOperation;
    }
}
