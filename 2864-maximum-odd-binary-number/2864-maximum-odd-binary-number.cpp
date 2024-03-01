class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int o=0;
        string s1="";
        for(char c:s)
        {
            if(c=='1')
            {
                o++;
            }
        }
        o--;
        for(int i=0;i<o;i++)
        {
            s1+="1";
        }
        
        for(int i=0;i<(s.size()-o-1);i++)
        {
            s1+="0";
        }
        s1+="1";
        return s1;
    }
};