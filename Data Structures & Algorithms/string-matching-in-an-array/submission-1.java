class Solution {
    public List<String> stringMatching(String[] words) {
        ArrayList<String> al = new ArrayList<>();
        for(int i = 0; i < words.length; i++)
        {
            for(int j = 0; j < words.length; j++)
            {
                if(i != j && words[j].indexOf(words[i]) != -1 && !al.contains(words[i])) al.add(words[i]);
            }
        }   
        return al;
    }
}