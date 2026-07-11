class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int l = i + 1;
            int r = n - 1;
            int sum;
            while(l < r)
            {
                sum = nums[i] + nums[l] + nums[r];
                if(sum > 0) r--;
                else if(sum < 0) l++;
                else
                {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    cout << i << " " << l << " " << r << endl;
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1]) l++;
                }
            }
            
        }
        return ans;
    }
};
