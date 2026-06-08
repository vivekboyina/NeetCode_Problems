class Solution {
    public int countSeniors(String[] details) {
        int ans = 0;
        for(String i : details) if(((int)(i.charAt(11) - '0'))*10 + (int)(i.charAt(12) - '0') > 60) ans+=1;
        return ans;
    }
}