class Solution {
public:
    void generate(vector<int>& nums, vector<int>& subset,int index,vector<vector<int>>& ans){
        if(index==nums.size()){
            ans.push_back(subset);
            return;
        }
        //not taking the element move to next
        generate(nums,subset,index+1,ans);
        
        //taking the element and move to next
        subset.push_back(nums[index]);
        generate(nums,subset,index+1,ans);
        //pop back to take another element
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        generate(nums,subet,0,ans);
        return ans;
        
    }
};