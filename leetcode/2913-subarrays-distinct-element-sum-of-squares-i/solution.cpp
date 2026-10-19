// Runtime: 44 ms
// Memory: 36.3 MB

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                int cnt=mp.size();
                ans+=cnt*cnt;
            }
        }
        return ans;
    }
};