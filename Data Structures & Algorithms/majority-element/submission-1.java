class Solution {
    public int majorityElement(int[] nums) {
        int cnt = 0,ans = -1;
        for(int i = 0; i < nums.length; i++)
        {
            if(cnt == 0) ans = nums[i];
            if(nums[i] == ans) cnt+=1;
            else cnt-=1;
        }
        return ans;
    }
}