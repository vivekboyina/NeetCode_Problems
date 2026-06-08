class Solution {
    public int[] twoSum(int[] nums, int trgt) {
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int i = 0; i < nums.length; i++)
        {
            if(hm.containsKey(trgt - nums[i])) 
                return new int[]{hm.get(trgt - nums[i]),i};
            hm.put(nums[i],i);
        }
        return new int[0];
    }
}
