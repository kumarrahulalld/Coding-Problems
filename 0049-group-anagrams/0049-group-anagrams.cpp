class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(string s:strs)
        {
            string s1=s;
                sort(s1.begin(),s1.end());
                mp[s1].push_back(s);        
        }
        vector<vector<string>> res;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};