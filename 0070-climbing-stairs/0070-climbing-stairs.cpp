class Solution {
public:
    int sol(int n,vector<int>& v)
    {
        if(n<=1)
        {
            return n>=0?1:0;
        }
        if(v[n]!=-1)
            return v[n];
        int s=sol(n-1,v)+sol(n-2,v);
        v[n]=s;
        return s;
    }
    int climbStairs(int n) {
    vector<int> v=vector(n+1,-1);
        return sol(n,v);
    }
};