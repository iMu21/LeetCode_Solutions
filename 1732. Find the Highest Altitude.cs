public class Solution {
    public int LargestAltitude(int[] gain) {
        var largestAltitude = 0;
        var curAltitude = 0;
        
        foreach(var g in gain)
        {
            curAltitude += g;
            
            largestAltitude = Math.Max(curAltitude,largestAltitude);
        }
        
        return largestAltitude;
    }
}
