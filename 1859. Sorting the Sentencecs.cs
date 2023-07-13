public class Solution
{
    public string SortSentence(string s)
    {
        string[] words = s.Split(" ");

        int numberOfWord = words.Length;

        string[] realWords = new string[numberOfWord];

        foreach (var word in words)
        {
            char c = word.Last();
            int position = c - '0';
            var nWord = word.Remove(word.Length - 1, 1);
            realWords[position - 1] = nWord;
        }

        return string.Join(" ", realWords);

    }
}
