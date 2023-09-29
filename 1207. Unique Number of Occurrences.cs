public class Solution {
    public bool UniqueOccurrences(int[] arr) {
        int[] cntPos = new int[1001];
        int[] cntNeg = new int[1001];
        
        foreach(var val in arr)
        {
            if(val>=0)
                cntPos[val]++;
            else
                cntNeg[val*(-1)]++;
        }
        
        var allOccurances = cntPos.Where(x=>x!=0).Concat(
        cntNeg.Where(x=>x!=0)
        ).ToList();
        
        if(allOccurances.Count == allOccurances.Distinct().ToList().Count)
            return true;
        
        return false;
    }
}