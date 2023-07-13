class Solution
{
    public:
    string minWindow(string s, string t)
    {
        int arrS[60];
        int arrT[60];
        memset(arrT, 0, sizeof(arrT));
        memset(arrS, 0, sizeof(arrS));
        vector<pair<int, int>> ans;
        for (int i = 0; i < t.size(); i++)
        {
            arrT[t[i] - 'A']++;
        }
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            arrS[s[i] - 'A']++;
            bool flag = true;
            for (int j = 0; j < 60; j++)
            {
                if (arrS[j] < arrT[j])
                {
                    flag = false;
                }
            }
            if (flag)
            {
                while (arrS[s[j] - 'A'] > arrT[s[j] - 'A'])
                {
                    arrS[s[j] - 'A']--;
                    j++;
                }
                ans.push_back(make_pair(i - j + 1, j));
            }
        }

        if (ans.size())
        {
            sort(ans.begin(), ans.end());
            string sAns = "";
            for (int i = ans[0].second; i < ans[0].second + ans[0].first; i++)
            {
                sAns = sAns + s[i];
            }
            return sAns;
        }
        return "";
    }
};