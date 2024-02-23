class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
   vector<vector<pair<int,int>>>adj(n);
        for(int i = 0;i < flights.size();i++){
            int src1 = flights[i][0];
            int des1 = flights[i][1];
            int cost = flights[i][2];
            adj[src1].push_back(make_pair(des1,cost));
        }
        // for(int i = 0;i < n;i++){
        //     cout << i << ": ";
        //     for(int j = 0;j < adj[i].size();j++){
        //         cout << "(" << adj[i][j].first << " " << adj[i][j].second << ") ";
        //     }
        //     cout << endl;
        // }
        
        vector<int>arr(n,INT_MAX);
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int step = it.first;
            int n1 = it.second.first;
            int cost = it.second.second;
            if(step > k)continue;
            for(auto it2 : adj[n1]){
                int adjNode = it2.first;
                int c1 = it2.second;
                if(c1 + cost < arr[adjNode] && step <= k){
                    arr[adjNode] = cost + c1;
                    q.push({step + 1,{adjNode,cost + c1}});
                }
            }
            // arr[n1] = min(arr[n1],cost);
            // for(int i = 0;i < adj[n1].size();i++){
            //     int n2 = adj[n1][i].first;
            //     int c1 = adj[n1][i].second;
            //     if(step <= k){
            //         q.push({step + 1,{n2,cost + c1}});
            //     }
            // }
        }

        if(arr[dst] == INT_MAX)return -1;
        return arr[dst];
    }
};