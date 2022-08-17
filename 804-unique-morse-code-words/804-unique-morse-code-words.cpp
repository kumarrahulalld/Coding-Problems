class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string mapping[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        for(string s:words)
        {
            string code="";
            for(int i=0;i<s.size();i++)
                code+=mapping[s[i]-'a'];
            st.insert(code);
        }
        return st.size();
    }
};