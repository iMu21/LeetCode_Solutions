public class Solution
{
    public bool CanConstruct(string ransomNote, string magazine)
    {
        int[] count = new int[27];
        foreach (char i in magazine)
        {
            count[i - 'a']++;
        }

        foreach (char i in ransomNote)
        {
            if (count[i - 'a'] == 0) return false;
            count[i - 'a']--;
        }
        return true;
    }
}
