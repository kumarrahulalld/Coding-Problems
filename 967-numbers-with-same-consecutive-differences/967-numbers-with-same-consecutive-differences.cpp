class Solution {
public:
    vector<int> ans;
    void generateNum(int num,int k,int n){
        if(n==1){ans.push_back(num);return;}
        if(num%10-k>=0)generateNum(num*10+(num%10-k),k,n-1);
        if(k){if(num%10+k<10)generateNum(num*10+(num%10+k),k,n-1);}
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<10;i++) generateNum(i,k,n);
        return ans;
    }
};