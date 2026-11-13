// Runtime: 17 ms
// Memory: 21.8 MB

class Solution {
public:
    long long countValidSubstrings(string s) {
        long long left=0;
        long long count=0;
        for(long long right=0;right<s.size();right++){
            if(right>=2){
                while(left<=right-2 && s[right-2]=='a' && s[right-1]=='b' && s[right]=='c'){
                    left++;
                }
            }
            count+=right-left+1;
        }
        return count;
    }
};