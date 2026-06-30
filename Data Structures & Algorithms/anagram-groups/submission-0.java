class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans = new ArrayList<>();
        List<String> tmp = new ArrayList<>();
        HashMap<String,Boolean> hm = new HashMap<>();
        char[] ta,tb;
        for(int i = 0; i < strs.length; i++)
        {
            tmp = new ArrayList<>();
            tmp.add(strs[i]);
            ta = strs[i].toCharArray();
            Arrays.sort(ta);
            if(hm.containsKey(new String(ta))) continue;
            for(int j = 0; j < strs.length; j++)
            {
                if(i == j || strs[i].length() != strs[j].length()) continue;
                else
                {
                    tb = strs[j].toCharArray();   
                    Arrays.sort(tb);
                    if(Arrays.equals(ta,tb)) tmp.add(strs[j]);
                }
            }
            hm.put(new String(ta),true);
            ans.add(new ArrayList<>(tmp));
        }
        return ans;
    }
}