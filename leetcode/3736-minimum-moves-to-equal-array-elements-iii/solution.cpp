// Runtime: 0 ms
// Memory: 31.4 MB

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int sums=0;
        for(auto i:nums){
            sums=sums+(mx-i);
        }
        return sums;
    }
};