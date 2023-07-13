public class Solution
{
    public int StrStr(string haystack, string needle)
    {
        int[,] solvDp = new int[2, needle.Length];
        solvDp[0, 0] = 0;
        for (int i = 0; i < haystack.Length; i++)
        {
            for (int j = 0; j < needle.Length; j++)
            {
                if (haystack[i] == needle[j])
                {
                    if (i == 0 || j == 0)
                    {
                        solvDp[i % 2, j] = 1;
                    }
                    else
                    {
                        solvDp[i % 2, j] = solvDp[(i - 1) % 2, j - 1] + 1;
                    }

                    if (solvDp[i % 2, j] == needle.Length)
                    {
                        return i - solvDp[i % 2, j] + 1;
                    }
                }
                else
                {
                    solvDp[i % 2, j] = 0;
                }
            }
        }
        return -1;
    }
}
