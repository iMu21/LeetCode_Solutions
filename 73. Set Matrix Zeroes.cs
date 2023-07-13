public class Solution
{
    public void SetZeroes(int[][] matrix)
    {
        List<int> rows = new List<int>();
        List<int> cols = new List<int>();

        for (int i = 0; i < matrix.Length; i++)
        {
            for (int j = 0; j < matrix[i].Length; j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows.Add(i);
                    cols.Add(j);
                }
            }
        }

        for (int i = 0; i < matrix.Length; i++)
        {
            for (int j = 0; j < matrix[i].Length; j++)
            {
                if (rows.Contains(i) || cols.Contains(j))
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}
