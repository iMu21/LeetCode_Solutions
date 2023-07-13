public class Solution
{
    public int MySqrt(int x)
    {
        long y = (long)x;
        long i = 1;
        while (i * i < y + 1)
        {
            i++;
        }
        return (int)i - 1;
    }
}
