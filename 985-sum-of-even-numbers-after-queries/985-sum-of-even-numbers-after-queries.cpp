class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> result;
        int esum=0;
        for(int i:nums)
        {
            if((i&1)==0)
                esum+=i;
        }
        for(int i=0;i<queries.size();i++)
        {
            int currentNum=nums[queries[i][1]];
            if((currentNum&1)==0)
            {
                //cout<<i<<" even"<<endl;
                if((queries[i][0]&1)==0)
                    esum+=queries[i][0];
                else
                    esum-=currentNum;
            }
            else
            {
                if((queries[i][0]&1)==1)
                    esum+=queries[i][0]+nums[queries[i][1]];
                    
            }
            nums[queries[i][1]]+=queries[i][0];
            result.push_back(esum);
        }
        return result;
    }
};