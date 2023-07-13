public class Solution
{
    public string LongestCommonPrefix(string[] str)
    {
        string ans = "";
        if (str.Length == 1) return str[0];
        if (str.Length == 0) return ans;
        int j = 0;
        while (true)
        {
            for (int i = 1; i < str.Length; i++)
            {
                if ((str[i - 1].Length - 1 < j) || (str[i].Length - 1 < j)) return ans;

                if (str[i][j] != str[i - 1][j])
                {
                    return ans;
                }
            }
            ans = ans + str[0][j];
            j++;
        }
        return ans;
    }
}
