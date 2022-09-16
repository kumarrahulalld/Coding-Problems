class Solution {
public:
  int f(int i, int j, int n, vector<int>& nums, vector<int> & multipliers, vector<vector<int>> & dp){
if(j == multipliers.size())return 0;
if(dp[i][j] != INT_MIN)return dp[i][j];
int left = f(i+1, j+1, n, nums, multipliers, dp) + nums[i]*multipliers[j];
int right = f(i, j+1, n-1, nums, multipliers, dp) + nums[n-1]*multipliers[j];
return dp[i][j] = max(left, right);

}
int maximumScore(vector<int>& nums, vector<int>& multipliers) {
    int n = nums.size();
    int m = multipliers.size();
    vector<vector<int> > dp(m+1, vector<int> (m+1, INT_MIN));
    return f(0,0,n, nums, multipliers, dp);
    
}
};