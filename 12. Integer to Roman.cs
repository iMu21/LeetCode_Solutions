public class Solution
{
    public string IntToRoman(int num)
    {
        var numList = new List<int> { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
        var charList = new List<string> { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        var ans = "";

        for (int i = 0; i < numList.Count; i++)
        {
            var a = num / numList[i];
            num = num % numList[i];

            while (a > 0)
            {
                ans = ans + charList[i];
                a--;
            }
        }

        return ans;
    }
}
