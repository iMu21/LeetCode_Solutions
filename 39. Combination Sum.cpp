class Solution
{
    public:
  void comb(vector<int>& candidates, int target, int curSum, int pos, vector<int> curComb, vector<vector<int>>& ans)
    {
        curComb.push_back(candidates[pos]);
        curSum += candidates[pos];
        if (target < curSum) return;
        if (target == curSum)
        {
            ans.push_back(curComb);
            return;
        }
        int i = pos;
        while (i < candidates.size()) { comb(candidates, target, curSum, i, curComb, ans); i++; }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<int> curComb;
        vector<vector<int>> ans;
        int i = 0;
        while (i < candidates.size())
        {
            comb(candidates, target, 0, i, curComb, ans); i++;
        }
        return ans;
    }
};
