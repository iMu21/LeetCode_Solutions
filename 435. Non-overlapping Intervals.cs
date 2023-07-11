public class Solution
{
    public int EraseOverlapIntervals(int[][] intervals)
    {
        intervals = intervals.OrderBy(x => x[0]).ToArray();
        int result = 0;

        for (int i = 0; i < intervals.Length - 1; i++)
        {
            if (intervals[i][1] <= intervals[i + 1][0])
                continue;

            intervals[i + 1][0] = intervals[i][0];
            intervals[i + 1][1] = intervals[i][1] < intervals[i + 1][1] ? intervals[i][1] : intervals[i + 1][1];
            result++;
        }
        return result;
    }
}