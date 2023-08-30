public class Solution
{
    public string GcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
            return "";

        var len1 = str1.Length;
        var len2 = str2.Length;

        var lenGcd = GCD(len1, len2);

        return str1.Substring(0, lenGcd);
    }

    private int GCD(int a, int b)
    {
        return b == 0 ? a : GCD(b, a % b);
    }
}
