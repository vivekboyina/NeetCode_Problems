class Solution {
public:
    int carFleet(int t, vector<int>& pos, vector<int>& sp) {
        unordered_map<int,int>mp;
        int n = sp.size();
        for(int i = 0; i < n; i++) mp[pos[i]] = sp[i];
        sort(pos.begin(),pos.end(),greater<int>());
        stack<double>st;
        double tmp;
        for(int i = 0; i < n; i++)
        {
            tmp = (t - pos[i])/(double)mp[pos[i]];
            if(st.empty()) st.push(tmp);
            else if(st.top() < tmp) st.push(tmp);
        }
        return st.size();
    }
};
