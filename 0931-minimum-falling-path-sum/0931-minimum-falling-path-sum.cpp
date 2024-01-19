class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
 int len = A.size();
        if(len == 0) return 0;
        int dp[len][len];
        for(int i = 0; i < len; i++){
            dp[0][i] = A[0][i];
        }
        for(int i = 1; i < len; i++){
            for(int j = 0; j < len; j++){
                dp[i][j] = min(min(j > 0 ? dp[i - 1][j - 1]: INT_MAX, j + 1 < len ? dp[i - 1][j + 1]: INT_MAX), dp[i - 1][j]) + A[i][j];
            }
        }
        int res = INT_MAX;
        for(int i = 0; i < len; i++)
            res = min(res, dp[len - 1][i]);
        return res;
    }
};