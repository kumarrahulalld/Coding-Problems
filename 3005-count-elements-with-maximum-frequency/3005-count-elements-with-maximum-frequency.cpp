class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int m=0;
        int arr[101]={0};
        for(int num:nums)
        {
            arr[num]++;
            m=max(m,arr[num]);
        }
        int c=0;
        for(int i=0;i<101;i++)
        {
            if(arr[i]==m)
            {
                c+=m;
            }
        }
        return c;
    }
};