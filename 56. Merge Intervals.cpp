class Solution
{
    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {

        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); i++)
        {
            vector<int> v;
            v.push_back(intervals[i][0]);
            if (i + 1 != intervals.size())
            {
                if (intervals[i][1] >= intervals[i + 1][0])
                {
                    int mx = intervals[i][1];
                    while (mx >= intervals[i + 1][0])
                    {
                        mx = max(mx, intervals[i + 1][1]);
                        //cout<<"dhukce "<<i<<endl;
                        i++;
                        if (i + 1 == intervals.size())
                        {
                            break;
                        }
                    }
                    v.push_back(mx);
                }
                else
                {
                    v.push_back(intervals[i][1]);
                }
            }
            else
            {
                v.push_back(intervals[i][1]);
            }
            ans.push_back(v);
        }

        return ans;
    }
};