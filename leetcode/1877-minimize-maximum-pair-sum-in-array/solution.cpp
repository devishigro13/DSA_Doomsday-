// Runtime: 184 ms
// Memory: 100 MB

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int i=0;
        int mx=INT_MIN;
        while(i<j){
            int sm=0;
            sm+=nums[i]+nums[j];
            j--;
            i++;
            mx=max(mx,sm);
        }
    return mx;
    }
};