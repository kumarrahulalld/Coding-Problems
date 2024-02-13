class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool fl=true;
        for(string s:words)
        {
            fl=true;
            for(int i=0;i<s.size()/2;i++)
            {
                if(s[i]!=s[s.size()-i-1])
                {
                    fl=false;
                    break;
                }
                else
                    fl=true;
            }
            if(fl)
                return s;
        }
        return "";
    }
};