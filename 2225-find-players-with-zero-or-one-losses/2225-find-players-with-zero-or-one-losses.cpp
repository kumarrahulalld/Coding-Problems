class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       int arr[100001];
        fill(arr,arr+100001,INT_MIN);
        int mx=0;
        vector<vector<int>> res(2,vector<int>());
        for(int i=0;i<matches.size();i++)
        {
            //cout<<arr[i]<<" "<<endl;
            if(arr[matches[i][1]]==INT_MIN)
            {
                arr[matches[i][1]]=0;
            }
            if(arr[matches[i][0]]==INT_MIN)
            {
                arr[matches[i][0]]=0;
            }
            if(arr[matches[i][1]]!=INT_MIN)
            {
                arr[matches[i][1]]++;
                //arr[matches[i][0]]--;
            }
            mx=max(mx,matches[i][1]);
            mx=max(mx,matches[i][0]);
        }
        //cout<<mx<<" "<<arr[mx]<<endl;
        for(int i=1;i<=mx;i++)
        {
            if(arr[i]==0)
            {
                res[0].push_back(i);
            }
            else if(arr[i]==1)
            {
                res[1].push_back(i);
            }
        }
        return res;
    }
};