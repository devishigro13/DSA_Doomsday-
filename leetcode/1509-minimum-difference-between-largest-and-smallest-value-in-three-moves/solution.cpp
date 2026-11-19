// Runtime: 16 ms
// Memory: 42.2 MB

class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int result=INT_MAX;
        result=min(result,nums[n-4]-nums[0]);    //3 big
        result=min(result,nums[n-1]-nums[3]);    //3 small
        result=min(result,nums[n-3]-nums[1]);    //1 small,2 big
        result=min(result,nums[n-2]-nums[2]);    //2 big,2 small
        return result;
    }
};
