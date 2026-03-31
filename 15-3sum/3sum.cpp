class Solution {
public:
    // make global 2D vector which is store result

    vector<vector<int>>result;

    void towSum(vector<int>&nums,int target,int i,int j){

        while(i<j){

            if(i<j && nums[i]+nums[j]>target) j--;

            else if(i<j && nums[i]+nums[j] < target) i++;
            
            else {
                while(i<j && nums[i]==nums[i+1]) i++;
                while(i<j && nums[j]==nums[j-1]) j--;

                result.push_back({-target,nums[i],nums[j]});

                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();

        /* sort the given array because it is ask about element not index 
            if it is ask about index so we can not sort.
        */

        sort(nums.begin(),nums.end());

        // fix elemnt 

        for(int i=0;i<n;i++){

            /* if current element is alredy fix then skip it*/
            if(i>0 && nums[i]==nums[i-1]) continue;

            int n1=nums[i];

            int target=-n1;

            towSum(nums,target,i+1,n-1);
        }
        
        return result;
            
    }
};