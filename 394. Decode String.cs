public class Solution
{
    public string DecodeString(string s)
    {
        Stack<char> stack = new Stack<char>();

        foreach (var c in s)
        {
            if (c != ']')
            {
                stack.Push(c);
            }
            else
            {
                var builder1 = new StringBuilder();
                while (stack.Peek() != '[')
                {
                    builder1.Append(stack.Pop());
                }
                stack.Pop();
                var alph = builder1.ToString();

                var builder = new StringBuilder();
                while (stack.Count > 0 && stack.Peek() >= '0' && stack.Peek() <= '9')
                {
                    builder.Append(stack.Pop());
                }
                var arrFreq = builder.ToString().ToCharArray();
                Array.Reverse(arrFreq);
                var freq = Int32.Parse(new string(arrFreq));
                
                var arrAlph = alph.ToCharArray();
                Array.Reverse(arrAlph);
                
                while (freq != 0)
                {
                    foreach (var alp in arrAlph)
                    {
                        stack.Push(alp);
                    }
                    freq--;
                }
            }
        }

        string ans = "";
        while (stack.Count > 0)
        {
            ans = stack.Pop() + ans;
        }

        return ans;
    }
}