public class Solution
{
    public bool IsHappy(int n)
    {
        List<int> loopDigits = new List<int>();
        loopDigits.Add(n);
        while (n != 1)
        {
            int cur = 0;
            while (n != 0)
            {
                cur += (n % 10) * (n % 10);
                n /= 10;
            }
            foreach (int i in loopDigits)
            {
                //Console.WriteLine(i+" "+cur);
                if (i == cur) return false;
            }
            loopDigits.Add(cur);
            n = cur;
        }

        return true;
    }
}
