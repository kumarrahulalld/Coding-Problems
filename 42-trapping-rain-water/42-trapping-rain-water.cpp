class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>lmax,rmax;
        lmax.push_back(0);
        for(int i=1;i<height.size();i++)
        {
            lmax.push_back(max(lmax[lmax.size()-1],height[i-1]));
        }
        rmax.push_back(0);
        for(int i=height.size()-2;i>=0;i--)
        {
            rmax.push_back(max(rmax[rmax.size()-1],height[i+1]));
        }
        int result=0;
        for(int i=0;i<height.size();i++)
        {
            result+= max(0,min(lmax[i],rmax[height.size()-i-1])-height[i]);
        }
        return result;
    }
};