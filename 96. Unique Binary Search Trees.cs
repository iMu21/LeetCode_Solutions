//Author - Md Imran Khan
//Writting Date - 5 July 2023
public class Solution
{
    public int NumTrees(int n)
    {
        List<int> dp = (new int[n + 1]).ToList();

        return NumOfBST(n, dp);
    }

    public int NumOfBST(int n, List<int> dp)
    {
        if (n <= 1) return 1;
        if (dp[n] != 0) return dp[n];

        for (int i = 1; i <= n; i++)
        {
            int left = NumOfBST(i - 1, dp);
            int right = NumOfBST(n - i, dp);

            dp[n] += (left * right);
        }
        return dp[n];
    }
}
