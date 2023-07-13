class Solution
{
    public:
    bool check(vector<int> solv, long long int num)
    {
        if (solv.size() < 10)
        {
            return true;
        }
        for (int i = 0; i < solv.size(); i++)
        {
            if (solv[i] > num % 10) { return false; }
            if (solv[i] < num % 10) { return true; }
            num /= 10;

        }
        return true;
    }
    int reverse(int x)
    {
        int signFlag = 1;
        long long int a;
        if (x < 0)
        {
            signFlag = -1;
            a = x * (-1LL);

        }
        else
        {
            a = x;
        }
        unsigned int ans = 0;
        vector<int> solv;
        while (a)
        {
            solv.push_back(a % 10);
            ans = ans * 10 + (a % 10);
            a /= 10;
        }
        if (signFlag == -1)
        {
            if (check(solv, 8463847412))
            {
                return ans * -1;
            }
        }
        else
        {
            if (check(solv, 7463847412))
            {
                return ans;
            }
        }
        return 0;


    }
};