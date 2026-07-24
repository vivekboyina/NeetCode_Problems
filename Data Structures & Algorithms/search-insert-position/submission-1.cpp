class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l = 0;
        int r = nums.size() - 1;
        int ans = -1;
        int m;
        if(nums[r] < t) ans = r + 1;
        else if(nums[l] > t) ans = l;
        else
        {
            while(l <= r)
            {
                m = l + (r - l)/2;
                if(nums[m] == t)
                {
                    ans = m;
                    break;
                }
                else if(m > 0 && nums[m] > t && nums[m - 1] < t)
                {
                    ans = m;
                    break;
                }
                else if(nums[m] > t) r = m - 1;
                else if(nums[m] < t) l = m + 1;
            }
        }
        return ans;
    }
};