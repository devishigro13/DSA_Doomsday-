// Runtime: 0 ms
// Memory: 27.7 MB

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1;
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                len++;
            }else{
                len=1;
            }
            ans=max(ans,len);
        }
        len=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                len++;
            }else{
                len=1;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};