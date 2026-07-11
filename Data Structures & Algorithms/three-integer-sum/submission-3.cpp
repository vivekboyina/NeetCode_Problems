class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i : nums) mp[i]++;
        vector<vector<int>>ans;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]--;
            if(i > 0 && nums[i - 1] == nums[i]) continue;
            for(int j = i + 1; j < n; j++)
            {
                mp[nums[j]]--;
                if(j > i + 1 && nums[j - 1] == nums[j]) continue;
                int t = -(nums[i] + nums[j]);
                if(mp[t] > 0) ans.push_back({nums[i],nums[j],t});
            }
            for(int j = i + 1; j < n; j++) mp[nums[j]]++;
        }
        return ans;
    }
};
