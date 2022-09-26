class Solution {
public:
    vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>>mp;
        for(string s:paths)
        {
            vector<string> ss=split(s," ");
            string dirname=ss[0];
            for(int i=1;i<ss.size();i++)
            {
                string s2=ss[i].substr(0, ss[i].find("("));
                string s3=ss[i].substr(ss[i].find(".txt"),ss[i].size());
                mp[s3].push_back(dirname+"/"+s2);
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(mp[it->first].size()>1)
            result.push_back(it->second);
        }
        return result;
    }
};