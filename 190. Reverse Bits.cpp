class Solution
{
    public:
    uint32_t reverseBits(uint32_t n)
    {
        bool arr[32];
        for (int i = 0; i < 32; i++)
        {
            arr[i] = n % 2;
            n /= 2;
        }
        uint32_t ans = 0;
        long long int cur = 1;
        for (int i = 31; i >= 0; i--)
        {
            if (arr[i])
            {
                ans += cur;
            }
            cur *= 2;
        }
        return ans;
    }
};