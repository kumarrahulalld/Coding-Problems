class Solution {
public:
    int firstUniqChar(string s) {
        int a[26]={0};
        int b[26]={0};
        int res=INT_MAX;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']++;
            b[s[i]-'a']=max(b[s[i]-'a'],i);
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]==1)
            {
                res=min(res,b[i]);
            }
        }
        return res==INT_MAX ? -1:res;
    }
};