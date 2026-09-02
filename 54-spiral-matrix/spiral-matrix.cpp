class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();

        int top=0,bottom=n-1;
        int left=0,right=m-1;

        vector<int>ans;

        while(top<=bottom && left<=right){
            // left to right
            for(int i=left;i<=right;i++){
                ans.push_back(nums[top][i]);
            }
            top++;
            // top to bottom
            for(int i=top;i<=bottom;i++){
                ans.push_back(nums[i][right]);
            }
            right--;
            // right to left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(nums[bottom][i]);
                }
                bottom--;
            }
            // bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(nums[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};