class Solution
{
    public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
        int strt = -1;
        int endd = -1;
        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[i][0] > newInterval[1] || intervals[i][1] < newInterval[0])
            {
                continue;
            }
            else
            {
                if (strt == -1)
                {
                    strt = i;
                }
                endd = i;
            }

        }

        if (endd != -1)
        {
            newInterval[0] = min(intervals[strt][0], newInterval[0]);
            newInterval[1] = max(intervals[endd][1], newInterval[1]);
            intervals.erase(intervals.begin() + strt, intervals.begin() + endd + 1);
        }
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());

        return intervals;
    }
};
