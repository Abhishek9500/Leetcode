class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int n = nums.size(); // row
        int m = nums[0].size(); // columns

        vector<int>ans;

        int srow = 0,erow = n-1, scol = 0, ecol=m-1;

        while(srow <= erow && scol <= ecol){
            // left to right  
            for(int i = scol; i <= ecol ; i++){
                ans.push_back(nums[srow][i]);
            }
            // top to down
            for(int i = srow+1; i <= erow; i++){
                ans.push_back(nums[i][ecol]);
            }
            // right to left
            for(int i = ecol-1; i >= scol; i--){
                if(srow==erow) break;
                ans.push_back(nums[erow][i]);
            }
            // bottom to top
            for(int i = erow - 1; i >= srow+1 ;i--){
                if(scol==ecol) break;
                ans.push_back(nums[i][scol]);
            }

            srow++ , scol++ , erow--, ecol--;
        }
        return ans;
    }
};