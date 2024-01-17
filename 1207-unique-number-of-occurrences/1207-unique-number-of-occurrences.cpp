class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ar[2001]={0};
        set<int> s;
        for(int i=0;i<arr.size();i++)
        {
            ar[arr[i]+1000]++;
        }
        for(int i=0;i<2001;i++)
        {
            if(ar[i]!=0)
            {
                if(s.find(ar[i])==s.end())
                {
                    s.insert(ar[i]);
                }
                else
                {
                return false;
                }
            }
         
        }
        return true;
    }
};