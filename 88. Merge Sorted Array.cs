public class Solution
{
    public void Merge(int[] nums1, int m, int[] nums2, int n)
    {
        for (int i = m - 1; 0 <= i; i--)
        {
            nums1[i + n] = nums1[i];
        }

        int pos1 = n;
        int pos2 = 0;

        for (int i = 0; i < n + m; i++)
        {
            if (pos1 < n + m && pos2 < n)
            {
                if (nums1[pos1] <= nums2[pos2])
                {
                    nums1[i] = nums1[pos1];
                    pos1++;
                }
                else
                {
                    nums1[i] = nums2[pos2];
                    pos2++;
                }
            }
            else if (pos2 < n)
            {
                nums1[i] = nums2[pos2];
                pos2++;
            }
            else
            {
                break;
            }
        }
    }
}
