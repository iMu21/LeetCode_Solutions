public class Solution
{
    public string CountAndSay(int n)
    {
        string x = "1";
        while (n > 1)
        {
            x = Say(x); n--;
        }

        return x;
    }

    public string Say(string x)
    {
        var charArray = x.ToCharArray();

        int cnt = 1;
        string res = "";
        for (int i = 1; i < c.Length; i++)
        {
            if (c[i] == c[i - 1]) cnt++;
            else
            {
                res = res + cnt.ToString() + c[i - 1];
                cnt = 1;
            }
        }

        res = res + cnt.ToString() + c[c.Length - 1];

        return res;
    }
}
