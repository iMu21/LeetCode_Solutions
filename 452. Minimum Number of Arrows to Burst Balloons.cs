public class Solution
{
    public int FindMinArrowShots(int[][] points)
    {
        points = points.OrderBy(x => x[1]).ToArray();

        var numOfArrows = 1;
        var lastArrow = points[0][1];

        for (int i = 1; i < points.Length; i++)
        {
            if (points[i][0] <= lastArrow)
                continue;
            numOfArrows++;
            lastArrow = points[i][1];
        }

        return numOfArrows;
    }
}