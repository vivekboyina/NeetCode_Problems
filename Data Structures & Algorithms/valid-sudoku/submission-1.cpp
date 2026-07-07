class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& bd) {
        unordered_set<char>st;
        for(int i = 0; i < 9; i++)
        {
            st.clear();
            for(int j = 0; j < 9; j++)
            {
                if(bd[i][j] == '.') continue;
                if(st.count(bd[i][j])) return false;
                st.insert(bd[i][j]);
            }
        }
        for(int i = 0; i < 9; i++)
        {
            st.clear();
            for(int j = 0; j < 9; j++)
            {
                if(bd[j][i] == '.') continue;
                if(st.count(bd[j][i])) return false;
                st.insert(bd[j][i]);
            }
        }
        for(int r = 0; r < 9; r+=3)
        {
            for(int c = 0; c < 9; c+=3)
            {
                st.clear();
                for(int i = r; i < r + 3; i++)
                {
                    for(int j = c; j < c + 3; j++)
                    {
                        if(bd[i][j] == '.') continue;
                        if(st.count(bd[i][j])) return false;
                        st.insert(bd[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
