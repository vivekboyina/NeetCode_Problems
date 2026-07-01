class Solution {
    public int maxDifference(String s) {
        HashMap<Character,Integer> hm = new HashMap<>();
        char c;
        for(int i = 0; i < s.length(); i++)
        {
            c = s.charAt(i);
            hm.put(c,hm.getOrDefault(c,0) + 1);
        }
        int od1 = Integer.MIN_VALUE,ev1 = Integer.MIN_VALUE,od2 = Integer.MAX_VALUE,ev2 = Integer.MAX_VALUE;
        for(Map.Entry<Character,Integer> it : hm.entrySet())
        {
            if(it.getValue() % 2 == 0) 
            {
                ev1 = Math.max(ev1,it.getValue());
                ev2 = Math.min(ev2,it.getValue());
            }
            else 
            {
                od1 = Math.max(od1,it.getValue());
                od2 = Math.min(od2,it.getValue());
            }
        }
        int a1 = od1 - ev1,a2 = od1 - ev2;
        return a2;
    }
}