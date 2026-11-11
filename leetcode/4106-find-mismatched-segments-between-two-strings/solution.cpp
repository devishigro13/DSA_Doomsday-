// Runtime: 1 ms
// Memory: 13.1 MB

class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        string t1,t2;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                t1+=s1[i];
                t2+=s2[i];
                continue;
            }
            if(t1!=""){
                ans.push_back ({t1,t2});
                t1="",t2="";
            }
        }
        if(t1!=""){
                ans.push_back ({t1,t2});
        }
        return ans;
    }
};

