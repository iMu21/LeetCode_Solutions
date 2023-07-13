class Solution
{
    public:
    int characterReplacement(string s, int k)
    {
        int arr[26];
        memset(arr, 0, sizeof(arr));
        int mxVal = 0;
        int j = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'A']++;
            if (mxVal <= arr[s[i] - 'A'])
            {
                mxVal = arr[s[i] - 'A'];
            }
            if (i - j - mxVal + 1 <= k)
            {
                ans = i - j + 1;
            }
            else
            {
                arr[s[j] - 'A']--;
                j++;
            }
        }
        return ans;
    }
};
