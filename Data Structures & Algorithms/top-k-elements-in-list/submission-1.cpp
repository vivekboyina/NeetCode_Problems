class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i : nums) mp[i]++;
        int n = nums.size();
        vector<vector<int>>bkt(n + 1);
        for(auto it : mp) bkt[it.second].push_back(it.first);
        vector<int>ans;
        for(int i = n; i >= 0 && ans.size() < k; i--)
        {
            for(int j = 0; j < bkt[i].size(); j++)
            {
                ans.push_back(bkt[i][j]);
                if(ans.size() == k) break;
            }
        }
        return ans;
    }
};
