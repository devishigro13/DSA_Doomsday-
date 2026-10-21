// Runtime: 0 ms
// Memory: 26.9 MB

class Solution {
public:
    void rev(vector<char>& s,int l,int r){
        if(l>=r) return;
        swap(s[l],s[r]);
        rev(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        rev(s,l,r);
    }
};