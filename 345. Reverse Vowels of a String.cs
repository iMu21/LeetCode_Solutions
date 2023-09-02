public class Solution {
    public string ReverseVowels(string s) {
        char[] charArray = s.ToCharArray();
        int beg =0;
        int endd = s.Length-1;

        while(beg<endd){
            var isBegVowel = "aeiouAEIOU".Contains(charArray[beg]);
            var isEnddVowel = "aeiouAEIOU".Contains(charArray[endd]);

            if(isBegVowel&&isEnddVowel)
            {
                var exch = charArray[beg];
                charArray[beg] = charArray[endd];
                charArray[endd] = exch;
                endd--;
                beg++;
            }
            else if(isBegVowel){
                endd--;
            }
            else if(isEnddVowel){
                beg++;
            }
            else{
                endd--;
                beg++;
            }
        }

        return new string(charArray);
    }
}