class Solution {
    public int appendCharacters(String s, String t) {
        if(s.length() == 0) return 0;
        int k = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == t.charAt(k)) k++;
            if(k >= t.length()) return 0;
        }
        if(k >= t.length()) return 0;
        return t.length() - k;
    }
}