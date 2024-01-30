class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res=0;
        stack<int> s;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="-" || tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="/")
            {
                int r=0;
                int f=s.top();
                s.pop();
                int sc=s.top();
                s.pop();
                if(tokens[i]=="-")
                {
                    r=sc-f;
                }
                else if(tokens[i]=="+")
                {
                    r=sc+f;
                }
                else if(tokens[i]=="*")
                {
                    r=sc*f;
                }
                else
                {
                    r=sc/f;
                }
                s.push(r);
            }
            else
                s.push(stoi(tokens[i]));
        }
        return s.top();
    }
};