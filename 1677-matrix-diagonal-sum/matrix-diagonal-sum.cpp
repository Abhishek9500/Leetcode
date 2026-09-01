class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        int n=nums.size();
    
        int sum = 0;

        for(int i = 0 ; i < n ; i++){
            sum += nums[i][i];
            sum += nums[i][n-1-i];

            if (i == n - 1 - i) {
                sum -= nums[i][i];          // remove duplicate center
            }
        }

        // secondarySum  -= nums[n-2][n-2];  /* when n is odd subtract overlaping element */

        return sum;
    }
};