class Solution
{
    public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) && ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9')))
            {
                //cout<<s[i]<<" "<<s[j]<<endl;
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] = s[i] - 32;
                }
                if (s[j] >= 'a' && s[j] <= 'z')
                {
                    s[j] = s[j] - 32;
                }
                if (s[i] != s[j]) return false;

                i++;
                j--;
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || ((s[i] >= '0' && s[i] <= '9')))
            {
                j--;
            }
            else
            {
                i++;
            }
        }

        return true;
    }
};