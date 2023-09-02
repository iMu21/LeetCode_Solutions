public class Solution {
    public string ReverseWords(string s) {
        var words = s.Split(' ').Where(st=>!string.IsNullOrEmpty(st)).ToList();
        words.Reverse();
        return String.Join(" ",words);
    }
}