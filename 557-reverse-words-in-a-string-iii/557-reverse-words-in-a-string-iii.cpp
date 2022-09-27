class Solution {
public:
    void reverse(string &s,int l,int r)
    {
        int mid=(r-l)/2;
        for(int i=0;i<=mid;i++)
        {
            char temp=s[l+i];
            s[l+i]=s[r-i];
            s[r-i]=temp;
        }
    }
    string reverseWords(string s) {
        int prev=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(s,prev,i-1);
                prev=i+1;
            }
        }
        reverse(s,prev,s.size()-1);
        return s;
    }
};