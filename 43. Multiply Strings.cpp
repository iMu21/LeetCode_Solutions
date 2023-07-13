class Solution
{
    public:
    string sumString(string st1, string st2)
    {
        int i = st1.size() - 1;
        int j = st2.size() - 1;
        string stAns = "";
        int carry = 0;
        while (i >= 0 && j >= 0)
        {
            carry += (st1[i] - 48) + (st2[j] - 48);
            int a = (carry % 10) + 48;
            char c = a;
            stAns = c + stAns;
            carry /= 10;
            i--;
            j--;
        }

        while (i >= 0)
        {
            carry += (st1[i] - 48);
            int a = (carry % 10) + 48;
            char c = a;
            stAns = c + stAns;
            carry /= 10;
            i--;
        }

        while (j >= 0)
        {
            carry += (st2[j] - 48);
            int a = (carry % 10) + 48;
            char c = a;
            stAns = c + stAns;
            carry /= 10;
            j--;
        }
        if (carry)
        {
            int a = carry + 48;
            char c = a;
            stAns = c + stAns;
        }
        return deleteLeadingZero(stAns);
    }

    string deleteLeadingZero(string st)
    {
        string ans = "";
        bool flag = true;
        for (int i = 0; i < st.size(); i++)
        {
            if (flag && st[i] == '0')
            {
                continue;
            }
            else
            {
                flag = false;
                ans = ans + st[i];
            }
        }
        if (ans.size() == 0)
        {
            ans = "0";
        }
        return ans;
    }

    string ntimeSum(string s, int n)
    {
        string solv = "0";
        while (n--)
        {
            solv = sumString(solv, s);
        }
        return solv;
    }

    string multiply(string num1, string num2)
    {
        vector<string> v;
        for (int i = num2.size() - 1; 0 <= i; i--)
        {
            v.push_back(ntimeSum(num1, (num2[i] - 48)));
        }
        string ans = "0";
        string shift = "";
        for (int i = 0; i < v.size(); i++)
        {
            ans = sumString(ans, v[i] + shift);
            shift = shift + "0";
        }
        return ans;
    }
};
