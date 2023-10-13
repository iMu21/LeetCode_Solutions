public class Solution {
    public string RemoveStars(string s) {
        int curNumOfStar = 0;
        string ans = "";
        var chArr = s.ToCharArray();
        
        for(int i=s.Length-1;i>=0;i--){
            if(chArr[i]=='*')
                curNumOfStar++;
            else if(curNumOfStar != 0)
                curNumOfStar--;
            else
                ans = chArr[i]+ans;
        }
        
        return ans;
    }
}
