class Solution {
    public int lengthOfLastWord(String s) {
        int ans = 0,curr = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == ' ') 
            {
                if(curr == 0) continue;
                ans = curr;
                curr = 0;
            }
            else curr++;
        }   
        if(curr > 0) ans = curr;
        return ans;
    }
}