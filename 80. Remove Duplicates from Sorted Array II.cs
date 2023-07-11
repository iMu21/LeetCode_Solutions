//Author- Md Imran Khan
//Writting Date - 5 July 2023

public class Solution
    {
        public int RemoveDuplicates(int[] nums)
        {
            int i = 2;
            int j = 2;
            int len = nums.Length;
            int deleted = 0;
            while (j < len)
            {
                if (nums[j] == nums[i - 2])
                {
                    j++;
                    deleted++;
                }
                else
                {
                    nums[i] = nums[j];
                    i++;
                    j++;
                }
            }
            return len - deleted;
        }
    }
