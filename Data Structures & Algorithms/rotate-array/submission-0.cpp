class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int tmp;
        while(k)
        {
            tmp = nums[n - 1];
            for(int i = n - 1; i > 0; i--) nums[i] = nums[i - 1];
            nums[0] = tmp;
            k--;
        }
    }
};