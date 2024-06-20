// subproblem overlapping problem
// dp is hash
class Solution {
public:

    int reach(int m , int n, int i, int j, vector<vector<int>> &dp){
        if(i >= m || j >= n) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        else return dp[i][j] = reach(m, n, i+1, j, dp) + reach(m, n, i, j+1, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        int result = reach(m, n, 0, 0, dp);
        if(n == 1 && m ==1) return result;
        return dp[0][0];
    }
};
