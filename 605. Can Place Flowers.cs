public class Solution
{
    public bool CanPlaceFlowers(int[] flowerbed, int n)
    {
        int len = flowerbed.Length;
        int[,] dp = new int[len, 2];

        if (flowerbed[0] == 1 || (len > 1 && flowerbed[1] == 1))
        {
            dp[0, 0] = 0;
            dp[0, 1] = 0;
        }
        else
        {
            dp[0, 0] = 0;
            dp[0, 1] = 1;
        }

        for (int i = 1; i < len; i++)
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && (i + 1 == len || flowerbed[i + 1] == 0))
            {
                dp[i, 0] = Math.Max(dp[i - 1, 0], dp[i - 1, 1]);
                dp[i, 1] = dp[i - 1, 0] + 1;
            }
            else
            {
                dp[i, 0] = Math.Max(dp[i - 1, 0], dp[i - 1, 1]);
                dp[i, 1] = Math.Max(dp[i - 1, 0], dp[i - 1, 1]);
            }
        }

        if (dp[len - 1, 1] >= n || dp[len - 1, 0] >= n)
            return true;

        return false;
    }
}
