// Runtime: 4 ms
// Memory: 13.8 MB

class Solution {
public:
    int minChanges(string s) {
        int mn_cnt=0;
        for(int i=0;i<s.size();i+=2){
            if(s[i]!=s[i+1]) mn_cnt++;
        }
        return mn_cnt;
    }
};
