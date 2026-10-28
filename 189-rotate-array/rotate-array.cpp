class Solution {
public:
    void rotated(vector<int>&nums,int sIdx,int eIdx){
        eIdx--;
        while(sIdx<eIdx){
            swap(nums[sIdx],nums[eIdx]);
            sIdx++;
            eIdx--;
        }
        return;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if(n==1) return;

        if(k>n) k= k%n;

        rotated(nums,0,n-k);
        rotated(nums,n-k,n);
        rotated(nums,0,n);
    }
};