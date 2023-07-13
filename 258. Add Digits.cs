public class Solution
{
    public int AddDigits(int num)
    {
        if (num < 10) return num;
        return AddDigits(num % 10 + AddDigits(num / 10));
    }
}
