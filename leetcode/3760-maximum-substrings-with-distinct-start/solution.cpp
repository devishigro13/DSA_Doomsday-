// Runtime: 28 ms
// Memory: 25.2 MB

class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        return mp.size();
    }
};