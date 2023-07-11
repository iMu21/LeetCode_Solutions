public class Solution
{
    public IList<IList<int>> Subsets(int[] nums)
    {
        List<IList<int>> result = new List<IList<int>>() { };
        var curList = new List<int>() { };
        result.Add(curList);
        MakeSubsets(result, 0, curList, nums);
        return result;
    }

    public void MakeSubsets(List<IList<int>> result, int curPos, List<int> ancientList, int[] nums)
    {
        for (int i = curPos; i < nums.Length; i++)
        {
            var a = ancientList.Select(x => x).ToList();
            a.Add(nums[i]);
            MakeSubsets(result, i + 1, a, nums);
            result.Add(a);
        }
    }
}
