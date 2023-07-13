class Solution
{
    public:
    int binary(int pos1, int pos2, vector<int>& v, int target)
    {
        //cout<<pos1<<" "<<pos2<<" ";
        if (v[pos1] == target) return pos1;
        else if (v[pos2] == target) return pos2;
        else if (pos1 == pos2 && v[pos1] == target) return pos1;
        else if (pos1 == pos2) return -1;
        int mid = (pos1 + pos2) / 2;
        //cout<<mid<<endl;
        if (v[pos1] >= v[mid] && (v[pos1] <= target || v[mid] >= target)) return binary(pos1, mid, v, target);

        else if (v[mid] >= v[pos2] && (v[mid] <= target || v[pos2] >= target)) return binary(mid, pos2, v, target);

        else if (v[pos1] <= v[mid] && v[pos1] <= target && target <= v[mid]) return binary(pos1, mid, v, target);

        else if (v[mid] <= v[pos2] && v[mid] <= target && target <= v[pos2]) return binary(mid, pos2, v, target);

        else return -1;
    }
    int search(vector<int>& nums, int target)
    {
        return binary(0, nums.size() - 1, nums, target);
    }
};
