// Runtime: 2 ms
// Memory: 10 MB

class Solution {
public:
    void solve(vector<int>& nums,vector<int>&ans,int i,vector<vector<int>>&allSubsets){
        if(i==nums.size()){
            allSubsets.push_back({ans});
            return;
        } 
        ans.push_back(nums[i]);
        solve(nums,ans,i+1,allSubsets);
        ans.pop_back();
        solve(nums,ans,i+1,allSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allSubsets;
        vector<int>ans;
        int i=0;
        solve(nums,ans,i,allSubsets);
        return allSubsets;
    }
};