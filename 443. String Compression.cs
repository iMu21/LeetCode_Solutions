public class Solution {
    public int Compress(char[] chars) {
        string st  = "";
        
        int cnt = 0;
        for(int i=0;i<chars.Length;i++)
        {
            if(i!=0 && chars[i]!=chars[i-1]){
                st = st+chars[i-1];
                if(cnt>1)
                    st = st+ cnt.ToString(); 
                cnt=1;
            }
            else{
                cnt++;
            }
            
            if(i==chars.Length-1){
                st = st+chars[i];
                if(cnt>1)
                    st = st+ cnt.ToString(); 
                cnt=1;
            }
        }
        
        var charsCompressed =  st.ToCharArray();
        
        for(int i=0;i<charsCompressed.Length;i++){
            chars[i] = charsCompressed[i];
        }
        
        return charsCompressed.Length;
    }
}