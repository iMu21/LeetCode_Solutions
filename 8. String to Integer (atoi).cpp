class Solution
{
    public:
    int myAtoi(string s)
    {
        int i = 0;
        long long int ans = 0;
        long long int st = 1;
        while (s[i] > '9' || s[i] < '0')
        {
            if (s[i] == '-')
            {
                st = -1LL;
                i++;
                break;
            }
            else if (s[i] == '+')
            {
                i++;
                break;
            }
            else if (s[i] != ' ')
            {
                return 0;
            }
            i++;
            if (s.size() == i) return 0;
        }
        while (s[i] >= '0' && s[i] <= '9')
        {
            ans = ans * 10 + (s[i] - 48);
            if (ans > 2147483648)
            {
                break;
            }
            i++;
            if (s.size() == i) break;
        }
        if (st == -1)
        {
            ans = min(ans, 2147483648LL);
        }
        else
        {
            ans = min(ans, 2147483647LL);
        }
        return ans * st;
    }
};
