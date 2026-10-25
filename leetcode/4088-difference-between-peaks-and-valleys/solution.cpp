// Runtime: 4 ms
// Memory: 31.6 MB

class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        vector<int>peak;
        vector<int>valley;
        int peakSum=0;
        int valleySum=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]){
                peak.push_back(nums[i]);
            }
            if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
                valley.push_back(nums[i]);
            }
        }
        for(auto i:peak){peakSum+=i;}
        for(auto i:valley){valleySum+=i;}
        return peakSum-valleySum;
    }
};