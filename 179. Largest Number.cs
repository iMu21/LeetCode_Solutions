public class Solution
{
    public string LargestNumber(int[] nums)
    {
        string[] str = new string[nums.Length];
        for (int i = 0; i < nums.Length; i++)
        {
            str[i] = nums[i].ToString();
        }

        Array.Sort(str, new ReverseStringCompare().Compare);

        if (str[0] == "0")
        {
            return "0";
        }

        string result = string.Join("", str);

        return result;
    }

    public class ReverseStringCompare : IComparer
    {
        public int Compare(object x, object y)
        {
            string s1 = x as string;
            string s2 = y as string;
            return -String.Compare(s1 + s2, s2 + s1);
        }
    }
}
