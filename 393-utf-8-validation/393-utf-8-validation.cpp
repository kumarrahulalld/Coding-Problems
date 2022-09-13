class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int len = data.size();
        int cur = -1,i=0;
        for(;i<len;i++){
            if (data[i]<=127&&data[i]>=0)continue;
            else if(data[i]<=223&&data[i]>=192)cur=1;
            else if(data[i]<=239&&data[i]>=224)cur=2;
            else if(data[i]<=247&&data[i]>=240)cur=3;
            else return 0; 
            if(i+cur>=len)return 0;
            while(cur--){ 
                i++;
                if(data[i]<128||data[i]>191)return 0;
            }
        }
        return 1;
    }
};