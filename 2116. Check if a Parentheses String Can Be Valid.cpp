class Solution
{
    public:
    bool canBeValid(string s, string locked)
    {
        if (s.size() % 2) return false;

        int cntLocked = 0;
        int cntGen = 0;
        int i = 0;

        while (i < s.size())
        {
            if (s[i] == ')' && locked[i] == '1')
            {
                if (cntLocked)
                {
                    cntLocked--;
                }
                else if (cntGen)
                {
                    cntGen--;
                }
                else
                {
                    return false;
                }
            }
            else if (locked[i] == '1')
            {
                cntLocked++;
            }
            else
            {
                cntGen++;
            }
            i++;
        }

        i = s.size() - 1;
        cntLocked = 0;
        cntGen = 0;

        while (0 <= i)
        {
            if (s[i] == '(' && locked[i] == '1')
            {
                if (cntLocked)
                {
                    cntLocked--;
                }
                else if (cntGen)
                {
                    cntGen--;
                }
                else
                {
                    return false;
                }
            }
            else if (locked[i] == '1')
            {
                cntLocked++;
            }
            else
            {
                cntGen++;
            }
            i--;
        }

        return true;
    }
};


