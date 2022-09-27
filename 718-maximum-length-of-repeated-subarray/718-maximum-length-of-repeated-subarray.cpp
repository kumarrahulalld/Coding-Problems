class Solution {
public:
    int res=0;
    int dp(vector<int> &n1,vector<int> &n2,int i,int j,vector<vector<int>> &dpp)
    {
        if(i==0 || j==0)
            return 0;
        if(dpp[i][j]!=-1)
            return dpp[i][j];
        int ans=0;
        if(n1[i-1]==n2[j-1]){
             ans=1+dp(n1,n2,i-1,j-1,dpp);
            res=max(res,ans);
            //return dpp[i][j]=ans;
        }
        
            dp(n1,n2,i-1,j,dpp);
            dp(n1,n2,i,j-1,dpp);
        return dpp[i][j]=ans;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        res=0;
        vector<vector<int>> dpp(nums1.size()+1,vector<int>(nums2.size()+1,-1));
         dp(nums1,nums2,nums1.size(),nums2.size(),dpp);
        return res;
    }
};