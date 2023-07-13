public class Solution
{
    public void Solve(char[][] board)
    {
        if (board == null || board.Length == 0 || board[0].Length == 0)
        {
            return;
        }
        int m = board.Length;
        int n = board[0].Length;

        for (int i = 0; i < m; i++)
        {
            if (board[i][0] == 'O')
            {
                MarkConnected(board, i, 0);
            }
            if (board[i][n - 1] == 'O')
            {
                MarkConnected(board, i, n - 1);
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (board[0][j] == 'O')
            {
                MarkConnected(board, 0, j);
            }
            if (board[m - 1][j] == 'O')
            {
                MarkConnected(board, m - 1, j);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
                else if (board[i][j] == 'M')
                {
                    board[i][j] = 'O';
                }
            }
        }
    }

    private void MarkConnected(char[][] board, int i, int j)
    {
        int m = board.Length;
        int n = board[0].Length;
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != 'O')
        {
            return;
        }
        board[i][j] = 'M';
        MarkConnected(board, i - 1, j);
        MarkConnected(board, i + 1, j);
        MarkConnected(board, i, j - 1);
        MarkConnected(board, i, j + 1);
    }
}
