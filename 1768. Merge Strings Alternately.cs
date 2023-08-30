public class Solution {
    public string MergeAlternately(string word1, string word2) {
        string merged = "";
        var word1len = word1.Length;
        var word2len = word2.Length;
        var i=0;
        var j=0;

        while(word1len>i && word2len>j){
            merged = merged+word1[i++];
            merged = merged+word2[j++];
        }
        while(word1len>i){
            merged = merged+word1[i++];
        }
        while(word2len>j){
            merged = merged+word2[j++];
        }

        return merged;
    }
}
