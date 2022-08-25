class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0},b[26]={0};
        for(char c:ransomNote)
            a[c-'a']++;
        for(char c:magazine)
            b[c-'a']++;
        for(int i=0;i<26;i++)
        {
            if(b[i]<a[i])
                return false;
        }
        return true;
    }
};