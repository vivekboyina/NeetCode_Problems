class Solution {
public:
    bool wordPattern(string ptrn, string s) {
        unordered_map<string,char>mp1;
        unordered_map<char,string>mp2;
        stringstream ss(s);
        string wr;
        char c;
        int i = 0;
        while(ss >> wr)
        {
            if(i == ptrn.size()) return false;
            c = ptrn[i++];
            if((mp1.count(wr) && mp1[wr] != c) || (mp2.count(c) && mp2[c] != wr)) return false;
            mp1[wr] = c;
            mp2[c] = wr;
        }
        return i == ptrn.size();
    }
};