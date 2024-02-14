class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i:nums)
        {
            if(i<0)
            {
                n.push_back(i);
            }
            else
            {
                p.push_back(i);
            }
        }
        int ind=0;
        for(int i=0;i<p.size();i++)
        {
            nums[ind++]=p[i];
            nums[ind++]=n[i];
        }
        return nums;
    }
};