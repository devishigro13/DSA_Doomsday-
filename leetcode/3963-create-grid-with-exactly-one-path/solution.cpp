// Runtime: 2 ms
// Memory: 11.9 MB

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>result;
        for (int i=0;i<m;i++){
            string r="";
            for (int j=0;j<n;j++){
                if (j==0){
                    r+=".";
                }else if(i==m-1){
                    r+=".";
                }else{
                    r+="#";
                }
            }
            result.push_back(r);
        }
        return result;
    }
};