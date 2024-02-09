class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        if(n==0)
            return vector<int>();
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> sub(n);
        sub[0].push_back(nums[0]);
        int max = 1;
        int max_index = 0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0 && sub[i].size() < sub[j].size())
                {
                    sub[i] = sub[j];
                }
                    
            }
            sub[i].push_back(nums[i]);
            if(sub[i].size()>max)
            {
                max = sub[i].size();
                max_index = i;
            }
        }
        return sub[max_index];
    }
};