class Solution
{
    public:
    vector<string> solution(string s, map<int, string> mp, int h, vector<string> ans)
    {
        if (h == s.size()) return ans;
        int k = s[h] - 48;
        vector<string> cur;
        for (int i = 0; i < mp[k].size(); i++)
        {
            if (ans.size() == 0)
            {
                string st = ""; st = st + mp[k][i];
                cur.push_back(st);
            }
            else
            {
                for (int j = 0; j < ans.size(); j++)
                {
                    string st = "";
                    st = st + mp[k][i];
                    cur.push_back(ans[j] + st);
                }
            }
        }
        return solution(s, mp, h + 1, cur);
    }


    vector<string> letterCombinations(string digits)
    {
        map<int, string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";

        vector<string> ans;


        return solution(digits, mp, 0, ans);


    }
};
