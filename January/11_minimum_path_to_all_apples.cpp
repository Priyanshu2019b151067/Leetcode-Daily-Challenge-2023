class Solution {
public:
    int dfs(vector<int> adj_list[],int node,vector<bool>& hasApple,int parent){
        int dis = 0;
        for(auto &adj_node : adj_list[node]){
            if(adj_node != parent){
                int temp = dfs(adj_list,adj_node,hasApple,node);
                if(hasApple[adj_node]){
                    temp += 2;
                    hasApple[node] = true;
                }
                dis += temp;
            }
        }
        return dis;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> adj_list[n];
        for(int i = 0;i < edges.size();i++){
            auto &vec = edges[i];
            adj_list[vec[0]].push_back(vec[1]);
            adj_list[vec[1]].push_back(vec[0]);
        }
        return dfs(adj_list,0,hasApple,-1);
    }
};