class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int mn=INT_MAX;
        int mx=INT_MIN;
        vector<int> vv;
        for(int i=0;i<nums.size();i++)
        {
            if(vv.size()<3)
            {
                vv.push_back(nums[i]);
            }
            else
            {
                if(vv[1]-vv[0]> k || vv[2]-vv[1] > k || vv[2]-vv[0] > k)
                    return {};
                v.push_back(vv);
                vv.clear();
                vv.push_back(nums[i]);
            }
        }
         if(vv[1]-vv[0]> k || vv[2]-vv[1] > k || vv[2]-vv[0] > k)
                    return {};
        v.push_back(vv);
        return v;
    }
};