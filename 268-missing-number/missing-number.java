class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int nums_sum=0;
        for(int x:nums){
            nums_sum+=x;
        }
        int actual_sum=(n*(n+1))/2;
        return actual_sum-nums_sum;
    }
}