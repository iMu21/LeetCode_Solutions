class Solution
{
    public:
    map<string, int> mp;
    set<string> newSet, solution;
    void builder(string st)
    {
        if (mp[st]) return;
        mp[st] = 1;
        for (int i = 0; i <= st.size(); i++)
        {
            solution.insert(st.substr(0, i) + "()" + st.substr(i, st.size()));
        }
    }

    vector<string> generateParenthesis(int n)
    {
        string st = "()";
        n--;
        newSet.insert(st);
        solution.insert(st);
        vector<string> ans;
        while (n--)
        {
            newSet = solution;
            solution.clear();
            for (auto s:newSet)
            {
                builder(s);
            }
        }
        for (auto s:solution)
        {
            ans.push_back(s);
        }
        return ans;
    }
};
