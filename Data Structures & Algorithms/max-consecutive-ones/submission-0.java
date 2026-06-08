class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int ans = 0,cr = 0;
        for(int i : nums)
        {
            if(i == 1) cr+=1;
            else cr = 0;
            ans = Math.max(ans,cr);
        }
        return ans;
    }
}