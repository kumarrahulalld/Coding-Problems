class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]-1]++;
        }
        vector<int> res(2,0);
        for(int i=0;i<nums.size();i++)
        {
            if(arr[i]==2)
            {
                res[0]=i+1;
            }
            if(arr[i]==0)
            {
                res[1]=i+1;
            }
        }
        return res;
    }
};