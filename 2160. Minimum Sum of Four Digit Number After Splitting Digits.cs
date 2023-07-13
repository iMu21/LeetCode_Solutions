public class Solution
{
    public int MinimumSum(int num)
    {
        List<int> list = new List<int>();
        while (num != 0)
        {
            list.Add(num % 10);
            num = num / 10;
        }

        list.Sort();

        if (list.Count == 0)
        {
            return 0;
        }
        else if (list.Count == 1)
        {
            return list[0];
        }
        else if (list.Count == 2)
        {
            return list[0] + list[1];
        }
        else if (list.Count == 3)
        {
            return list[2] + list[1] + (list[0] * 10);
        }
        else
        {
            return list[2] + list[3] + (list[0] * 10) + (list[1] * 10);
        }
    }
}
