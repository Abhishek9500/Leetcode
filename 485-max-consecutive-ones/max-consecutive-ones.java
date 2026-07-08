class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n=nums.length;
        int final_max=0;
        int current_max=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                current_max++;
                final_max=Math.max(current_max,final_max);
            }
            else current_max=0;
        }
        return final_max;
    }
}