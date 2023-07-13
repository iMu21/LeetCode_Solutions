class Solution
{
    public:
    double myPow(double x, int n)
    {
        if (x == 1) return 1.0000;
        if (n == -1) return 1.0000 / x;
        if (n == 0) return 1;
        if (n == 1) return x;
        double cur = myPow(x, n / 2);
        if (n % 2 && n < 0)
        {
            return (cur * cur) / x;
        }
        else if (n % 2)
        {
            return cur * cur * x;
        }
        else
        {
            return cur * cur;
        }
    }
};
