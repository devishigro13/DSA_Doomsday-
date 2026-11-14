// Runtime: 3 ms
// Memory: 30.2 MB

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        vector<int>a(n+1,0);
        for(int i=1;i<=n;i++){
            a[i]=a[i-1]+nums[i-1];
        }
        int mn=INT_MAX;
        for(int i=l;i<=n;i++){
            for(int j=max(0,i-r);j<=i-l;j++){
                int sum=a[i]-a[j];
                if(sum>0) mn=min(mn,sum);
            }
        }
        if (mn==INT_MAX) return -1;
        return mn;
    }
};