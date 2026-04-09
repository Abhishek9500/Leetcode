class Solution {
public:

    void findSubset(vector<int>&nums,int i,vector<vector<int>>&ans,vector<int>v){
        if(i==nums.size()){
            ans.push_back(v);
            v.clear();
            return ;
        }

        findSubset(nums,i+1,ans,v);
        v.push_back(nums[i]);
        findSubset(nums,i+1,ans,v);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;

        findSubset(nums,0,ans,v);
        
        return ans;
    }
};