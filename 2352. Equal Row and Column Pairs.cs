public class Solution {
    public int EqualPairs(int[][] grid) {
        int n = grid.Length;
        
        var rowColRel = new int[n,n];
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                    if(grid[i][j] != grid[j][k])
                        rowColRel[i,k]=1;
        
        int cnt = 0;
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(rowColRel[i,j] == 0)
                    cnt++;
        
        return cnt;
    }
}
