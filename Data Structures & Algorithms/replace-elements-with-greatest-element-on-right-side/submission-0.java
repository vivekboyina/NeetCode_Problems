class Solution {
    public int[] replaceElements(int[] arr) {
        int[] ans = new int[arr.length];
        int maxy = -1;
        for(int i = arr.length - 1; i >= 0; i--)
        {
            ans[i] = maxy;
            maxy = Math.max(arr[i],maxy);
        }
        return ans;
    }
}