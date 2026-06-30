class Solution {
    public int numUniqueEmails(String[] emails) {
        HashSet<String> hs = new HashSet<>();
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
            hs.add(new String(sb.toString()));
            sb = new StringBuilder("");
            pl = false;
            at = false;
        }
        return hs.size();
    }
}