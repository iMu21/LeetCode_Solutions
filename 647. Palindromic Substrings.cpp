class Solution
{
    public:
    int palindrom[1000][1000];
    string str;
    int check(int i, int j)
    {
        if (palindrom[i][j] != 0)
        {
            return palindrom[i][j];
        }
        if (i == j)
        {
            palindrom[i][j] = 1;
            return palindrom[i][j];
        }
        if (i + 1 == j && str[i] == str[j])
        {
            palindrom[i][j] = 1;
            return palindrom[i][j];
        }
        if (str[i] == str[j] && check(i + 1, j - 1) == 1)
        {
            palindrom[i][j] = 1;
            return palindrom[i][j];
        }
        else
        {
            palindrom[i][j] = 2;
            return palindrom[i][j];
        }
    }

    int countSubstrings(string s)
    {
        memset(palindrom, 0, sizeof(palindrom));
        str = s;
        int mx = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = s.size() - 1; i <= j; j--)
            {
                if (check(i, j) == 1)
                {
                    mx++;
                }
            }
        }


        return mx;
    }
};