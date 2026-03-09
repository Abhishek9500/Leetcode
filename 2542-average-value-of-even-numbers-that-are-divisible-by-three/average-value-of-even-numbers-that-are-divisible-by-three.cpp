class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                sum+=nums[i];
                cnt++;
            }
        }
        if(cnt!=0) return sum/cnt;
        return 0;
    }
};