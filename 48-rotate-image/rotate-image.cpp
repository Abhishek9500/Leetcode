class Solution {
public:
    void Transpose(vector<vector<int>>&nums){
        int order=nums.size();
        for(int i=0;i<order;i++){
            for(int j=i+1;j<order;j++){
                swap(nums[i][j],nums[j][i]);
            }
        }
        return;
    }

    void Reverse(vector<vector<int>>&nums){
        int order=nums.size();
        for(int k=0;k<order;k++){
            int i=0;
            int j=order-1;
            while(i<=j){
                swap(nums[k][i],nums[k][j]);
                i++;
                j--;
            }
        }
        return;
    }
    void rotate(vector<vector<int>>& matrix) {
        // to rotate matrix it take 2 step
        // 1  take transpose  of matrix
        // 2  reverse each row of matrix

        int order=matrix.size();

        Transpose(matrix);
        Reverse(matrix);
        return;
    }
};