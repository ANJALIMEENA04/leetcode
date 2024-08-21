class Solution {
public:
    string removeDup(string s) {
        string unique;
        int n = s.size();
        int i = 0;
        while (i < n) {
            char ch = s[i];
            unique += ch;
            while (i < n && s[i] == ch)
                i++;
        }
        return unique;
    }
    int strangePrinter(string s) {
        s = removeDup(s);
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        
        for (int i = n - 1; i >= 0; i--) {
            dp[i][i] = 1;
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j])
                    dp[i][j] = dp[i][j-1];
                else {
                    for (int k = i; k < j; k++) {
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j]);
                    }
                }
            }
        }

        return dp[0][n-1];
    }
};

// XXXXXXiXkXXj