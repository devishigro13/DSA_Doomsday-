// Runtime: 1 ms
// Memory: 8.8 MB

class Solution {
public:
    int calculateScore(int a, int b) {
        bitset<32>b1(a);
        bitset<32>b2(b);
        int s1=0,s2=0;
        for(auto i:b1.to_string()){
            if (i=='1') s1++;
        }
        for(auto i:b2.to_string()){
            if (i=='1') s2++;
        }
        if(s1>=s2)return s1*s2;
        return s2/s1;
    }
};