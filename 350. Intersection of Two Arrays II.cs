public class Solution
{
    public int[] Intersect(int[] nums1, int[] nums2)
    {
        Array.Sort(nums1);
        Array.Sort(nums2);
        int n = nums1.Length;
        int m = nums2.Length;
        int i = 0;
        int j = 0;
        List<int> ans = new List<int>() { };
        while (i < n && j < m)
        {
            if (nums1[i] == nums2[j])
            {
                ans.Add(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return ans.ToArray();
    }
}
