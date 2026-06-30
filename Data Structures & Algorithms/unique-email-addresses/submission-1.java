class Solution {
    public int numUniqueEmails(String[] emails) {
        HashMap<String,Boolean> hm = new HashMap<>();
        boolean at = false,pl = false;
        StringBuilder sb = new StringBuilder("");
        for(int i = 0; i < emails.length; i++)
        {
            for(int j = 0; j < emails[i].length(); j++)
            {
                if(!at && emails[i].charAt(j) == '.') continue;
                else if(!at && emails[i].charAt(j) == '+') pl = true;
                else if(emails[i].charAt(j) == '@')
                {
                    at = true;
                    sb.append(emails[i].charAt(j));
                }
                else if((pl && at) || (at) || (!pl && !at)) sb.append(emails[i].charAt(j));
            }
            hm.put(new String(sb.toString()),true);
            sb = new StringBuilder("");
            pl = false;
            at = false;
        }
        return hm.size();
    }
}