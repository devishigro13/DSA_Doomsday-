// Runtime: 0 ms
// Memory: 9.3 MB

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long n1=need1;
        long long n2=need2;
        long long k=min(n1,n2);
        long long a=n1*cost1+n2*cost2;
        long long b=(k*costBoth)+(n1-k)*cost1+(n2-k)*cost2;
        long long c=max(n1,n2)*costBoth;
        return min({a,b,c});
    }
};