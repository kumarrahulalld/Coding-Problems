class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int arr[1001]={0};
        for(int a:nums1)
        {
            arr[a]=1;
        }
        for(int b:nums2)
        {
            if(arr[b])
            {
                res.push_back(b);
                arr[b]=0;
            }
        }
        return res;
    }
};