class Solution {
public:

    int climbStairs(int n) {
        // vector<int> dp(n);
        if(n<3) return n;
        int a=1,b=2,c;
        // dp[0]=1;
        // dp[1]=2;
        for(int i=2;i<n;i++){
            c=a+b;
            a=b;b=c;
        }
        return c;
    }
};