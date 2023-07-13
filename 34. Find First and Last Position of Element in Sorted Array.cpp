class Solution
{
    public:
    vector<int> searchNum(vector<int>& nums, int target, int begFirst, int endFirst, int begLast, int endLast)
    {
        int n = nums.size();

        if (begFirst >= endFirst && begLast >= endLast)
        {
            //cout<<begFirst<<" "<<begLast<<endl;
            vector<int> ans;
            ans.push_back(endFirst);
            ans.push_back(endLast);
            return ans;
        }
        //cout<<begFirst<<" "<<endFirst<<" "<<begLast<<" "<<endLast<<endl;

        int midFirst = (begFirst + endFirst) / 2;
        int midLast = (begLast + endLast + 1) / 2;

        midLast = max(0, midLast);
        midLast = min(n - 1, midLast);

        midFirst = min(n - 1, midFirst);
        midFirst = max(0, midFirst);

        cout << begFirst << " " << midFirst << " " << endFirst << " " << begLast << " " << midLast << " " << endLast << endl;

        if (nums[midFirst] > target)
        {
            endFirst = midFirst - 1;
        }
        else if (nums[midFirst] < target)
        {
            begFirst = midFirst + 1;
        }
        else
        {
            endFirst = midFirst;
            if (midFirst - 1 >= 0)
            {
                if (nums[midFirst - 1] == target)
                {
                    endFirst--;
                }
            }
        }

        if (nums[midLast] > target)
        {
            endLast = midLast - 1;
        }
        else if (nums[midLast] < target)
        {
            begLast = midLast + 1;
        }
        else
        {
            begLast = midLast;
        }


        return searchNum(nums, target, begFirst, endFirst, begLast, endLast);
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> ans;

        if (nums.size() == 0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        //cout<<"ok"<<endl;
        ans = searchNum(nums, target, 0, nums.size() - 1, 0, nums.size() - 1);
        int n = nums.size() - 1;
        ans[0] = min(n, ans[0]);
        ans[0] = max(0, ans[0]);
        if (nums[ans[0]] == target) return ans;
        ans[0] = -1;
        ans[1] = -1;
        return ans;
    }
};
