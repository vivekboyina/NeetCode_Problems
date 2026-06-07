class Solution {
    public boolean isSubsequence(String s, String t) {
        if(s.length() == 0) return true;
        if(s.length() > t.length()) return false;
        int k = 0;
        for(int i = 0; i < t.length(); i++)
        {
            if(t.charAt(i) == s.charAt(k)) k++;
            if(k >= s.length()) return true;
        }
        return false;
    }
}