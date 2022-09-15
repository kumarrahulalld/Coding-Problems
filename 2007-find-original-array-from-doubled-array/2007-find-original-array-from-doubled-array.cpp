class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n = changed.size();
        if(n % 2 != 0) return ans;
        sort(changed.begin() , changed.end());
        unordered_map<int , int> mp;
        for(int x : changed)
        {
            if(mp[x / 2] > 0 and (x / 2) * 2 == x)
            {
                ans.push_back(x / 2);
                mp[x / 2]--;
            }
            else mp[x]++;
        }
        return (ans.size() == n / 2) ? ans : vector<int>(); 
    }
};