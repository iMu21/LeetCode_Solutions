public class Solution {
    public bool IsSubsequence(string s, string t) {
        if(string.IsNullOrEmpty(s))
            return true;
        
        var sArray = s.ToCharArray();
        var tArray = t.ToCharArray();
        var curIndexOfS = 0;
        var lastIndexOfS = sArray.Length-1;
        
        for(int i=0;i<tArray.Length;i++)
        {
            if(tArray[i]==sArray[curIndexOfS])
            {
                if(curIndexOfS == lastIndexOfS)
                    return true;
                
                curIndexOfS++;
            }
        }
        
        return false;
    }
}