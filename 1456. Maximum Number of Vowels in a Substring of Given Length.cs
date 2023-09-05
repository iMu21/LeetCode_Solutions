public class Solution {
    public int MaxVowels(string s, int k) {
        int curNumOfVowelsInWindow = 0;
        int maxNumOfVowelsInWindow = 0;
        char[] charArray = s.ToCharArray();
        
        for(int i=0;i<k;i++)
        {
            if("aeiou".Contains(charArray[i]))
                curNumOfVowelsInWindow++;
        }
        
        maxNumOfVowelsInWindow = curNumOfVowelsInWindow;
        
        for(int i=k;i<charArray.Length;i++)
        {
            if("aeiou".Contains(charArray[i]))
                curNumOfVowelsInWindow++;
            
            if("aeiou".Contains(charArray[i-k]))
                curNumOfVowelsInWindow--;
                
            maxNumOfVowelsInWindow = Math.Max(curNumOfVowelsInWindow, maxNumOfVowelsInWindow);
        }
        
        return maxNumOfVowelsInWindow;
    }
}
