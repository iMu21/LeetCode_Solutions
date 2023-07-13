public class Solution
{
    public int Divide(int k, int l)
    {
        if (k == -2147483648 && l == -1) return 2147483647;
        if (l == 1) return k;
        long dividend = k;
        long divisor = l;
        long val = 0;
        long cnt = 0;
        //Console.WriteLine(dividend+" "+divisor);
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        {
            dividend = Math.Abs(dividend);
            divisor = Math.Abs(divisor);
            while (dividend - val >= divisor)
            {
                val += divisor;
                cnt--;
            }
        }
        else
        {
            dividend = Math.Abs(dividend);
            divisor = Math.Abs(divisor);
            while (dividend - val >= divisor)
            {
                val += divisor;
                //Console.WriteLine(cnt+" "+val);
                cnt++;
            }
        }
        return (int)cnt;
    }
}
