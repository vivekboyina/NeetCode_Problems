class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length == 1) return strs[0];
        String s = strs[0],k;
        StringBuilder ans = new StringBuilder();
        StringBuilder pp = new StringBuilder();
        for(int i = 1; i < strs.length; i++)
        {
            pp = new StringBuilder();
            for(int j = 0; j < Math.min(s.length(),strs[i].length()); j++)
            {
                if(s.charAt(j) == strs[i].charAt(j)) pp.append(s.charAt(j));
                else break;
            }
            if(i == 1) ans = pp;
            else if(ans.length() > pp.length()) ans = pp;
        }
        return ans.toString();
    }
}