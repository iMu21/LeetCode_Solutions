public class Solution
{
    public int[] TopKFrequent(int[] nums, int k)
    {
        var answer = (from int n in nums
                      group n by n into g
                      orderby g.Count() descending
                      select g.Key).Take((k)).ToArray();
        return answer;
    }
}
