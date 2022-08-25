class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        int i=1;
        while(i<intervals.size())
        {
            if(intervals[i][0] <= result[result.size()-1][1])
            {
                result[result.size()-1][1] = max(result[result.size()-1][1], intervals[i][1]); 
            }
            else
            {
                result.push_back(intervals[i]);
            }
            i++;
        }
        return result;
    }
};