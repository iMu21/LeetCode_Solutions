class Solution
{
    public:
    bool isPalindrome(int x)
    {
        if (x < 0) return false;
        long long int y = x;
        long long int val = 0;
        while (y)
        {
            val = val * 10LL + (y % 10LL);
            y /= 10;
        }
        if (x == val) return true;
        return false;
    }
};
