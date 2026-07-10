class Solution {
public:
    bool validPalindrome(string s) {
        bool chnc = false;
        int i = 0;
        int j = s.length() - 1;
        int l,r;
        bool lx,rx;
        while(i < j)
        {
            if(s[i] != s[j])
            {
                if(chnc) return false;
                lx = false;
                rx = false;
                l = i + 1;
                r = j;
                while(l < r)
                {
                    if(s[l] != s[r])
                    {
                        lx = true;
                        break;
                    }
                    l++;
                    r--;
                }
                l = i;
                r = j - 1;
                while(l < r)
                {
                    if(s[l] != s[r])
                    {
                        rx = true;
                        break;
                    }
                    l++;
                    r--;
                }
                if(lx && rx) return false;
                else if(lx && !rx) j--;
                else if(rx && !lx) i++;
                else i++;
                chnc = true;
            }
            else 
            {
                i++;
                j--;
            }
        }
        return true;
    }
};