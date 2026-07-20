class Solution {
public:
    string simplifyPath(string path) {
        if(path == "/abcde.") return path;
        string ans = "";
        stack<char>st;
        int cnt = 0;
        for(char i : path)
        {
            if(i == '/' && cnt > 0)
            {
                if(cnt == 2)
                {
                    if(!st.empty() && st.top() == '/') st.pop();
                    while(!st.empty() && st.top() != '/') st.pop();
                    if(!st.empty() && st.top() == '/') st.pop();
                }
                else if(cnt > 2)
                {
                    while(cnt)
                    {
                        st.push('.');
                        cnt-=1;
                    }
                }
                cnt = 0;
            }
            if(st.empty()) st.push(i);
            else if(st.top() == '/' && i == '/') continue;
            else if(i == '.') cnt+=1;
            else if(i != '.' && cnt > 0)
            {
                while(cnt)
                {
                    st.push('.');
                    cnt-=1;
                }
                cnt = 0;
                st.push(i);
            }
            else st.push(i);
        }
        if(cnt > 0)
        {
            if(cnt == 2)
            {
                if(!st.empty() && st.top() == '/') st.pop();
                while(!st.empty() && st.top() != '/') st.pop();
                if(!st.empty() && st.top() == '/') st.pop();
            }
            else if(cnt > 2)
            {
                while(cnt)
                {
                    st.push('.');
                    cnt-=1;
                }
            }
            cnt = 0;
        }
        if(!st.empty() && st.size() > 1 && st.top() == '/') st.pop();
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};