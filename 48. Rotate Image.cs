public class Solution
{
    public void Rotate(int[][] matrix)
    {
        int n = matrix.Length;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                var c = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = c;
            }
        }
        for (int i = 0; i < n; i++)
        {
            matrix[i] = matrix[i].Reverse().ToArray();
        }
    }
}