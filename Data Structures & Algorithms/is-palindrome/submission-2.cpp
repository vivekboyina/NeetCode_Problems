class Solution {
public:
    bool isPalindrome(string s) {
        string k;
        for(char i : s)
        {
            if(i >= 'A' && i <= 'Z') k+=tolower(i);
            else if(i >= 'a' && i <= 'z') k+=i;
            else if(i >= '0' && i <= '9') k+=i;
        }
        int i = 0;
        int j = k.length() - 1;
        while(i < j)
        {
            if(k[i] != k[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
