public class Solution {
    public bool CloseStrings(string word1, string word2) {
        var cntsWord1 = new int[26];
        var cntsWord2 = new int[26];
        
        foreach(var w in word1)
            cntsWord1[w-'a']++;
        
        foreach(var w in word2)
            cntsWord2[w-'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(cntsWord1[i] != cntsWord2[i] 
               && cntsWord1[i] * cntsWord2[i]==0)
                return false;
        }
        
        Array.Sort(cntsWord1);
        Array.Sort(cntsWord2);
        
        for(int i=0;i<26;i++)
        {
            if(cntsWord1[i]!=cntsWord2[i])
                return false;
        }
        
        return true;
    }
}