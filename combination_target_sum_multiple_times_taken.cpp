class Solution {
public:
    
    void generate(vector<int>& nums,int target,vector<int>& subset,vector<vector<int>>& ans,int index){
        if(target==0){
            ans.push_back(subset);
            return;
        }
        if (target < 0 || index == nums.size()) return;
        //base case

        //skipping the element and not taking
        generate(nums,target,subset,ans,index+1);
        //taking the element and push into subset
        subset.push_back(nums[index]);
        //target-nums[index] reduce the target and take the same leement multiple times by not goinf further
        generate(nums,target-nums[index],subset,ans,index);
        subset.pop_back();

        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> subset;
        generate(nums,target,subset,ans,0);
        return ans;
        
    }
};
