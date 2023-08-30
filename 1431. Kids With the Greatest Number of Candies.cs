public class Solution
{
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies)
    {
        int mx = candies.Max();

        var boolArray = candies
            .ToList()
            .Select(x => x + extraCandies >= mx)
            .ToList();

        return boolArray;
    }
}
