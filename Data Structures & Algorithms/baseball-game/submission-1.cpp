class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<string>st;
        int a;
        for(string i : ops)
        {
            if(i == "+")
            {
                a = stoi(st.top());
                st.pop();
                a = a + stoi(st.top());
                st.push(to_string(a - stoi(st.top())));
                st.push(to_string(a));
            }
            else if(i == "C") st.pop();
            else if(i == "D") st.push(to_string(stoi(st.top())*2));
            else st.push(i);
        }
        int ans = 0;
        while(!st.empty())
        {
            ans+=stoi(st.top());
            st.pop();
        }
        return ans;
    }
};