// Runtime: 0 ms
// Memory: 31 MB

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>temp=nums;
        reverse(temp.begin(),temp.end());
        for(auto i:temp){
            nums.push_back(i);
        }
        return nums;
    }
};