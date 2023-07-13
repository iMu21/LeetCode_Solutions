class Solution
{
    public:
    vector<int> countBits(int n)
    {
        vector<int> v;
        int j = 0;
        while (j <= n)
        {
            int cur = 0;
            int i = j;
            while (i)
            {
                cur += i % 2;
                i /= 2;
            }
            v.push_back(cur);
            j++;
        }
        return v;
    }
};