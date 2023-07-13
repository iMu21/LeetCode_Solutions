class Solution
{
    public:
    string convert(string s, int numRows)
    {
        string subSolution[numRows];

        for (int i = 0; i < numRows; i++)
        {
            subSolution[i] = "";
        }

        int pos = 0;
        int flag = 1;

        for (int i = 0; i < s.size(); i++)
        {
            subSolution[pos] = subSolution[pos] + s[i];
            pos += flag;
            if (pos == -1)
            {
                pos = min(1, numRows - 1);
                flag = 1;
            }
            if (pos == numRows)
            {
                flag = -1;
                pos = max(numRows - 2, 0);
            }
        }

        string finalSolution = "";

        for (int i = 0; i < numRows; i++)
        {
            finalSolution = finalSolution + subSolution[i];
        }

        return finalSolution;
    }
};
