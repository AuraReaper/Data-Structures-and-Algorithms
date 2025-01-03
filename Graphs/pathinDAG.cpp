class Solution {
  public:
  
    void dfs(int curr , vector<bool>& visit , vector<vector<pair<int,int>>>& adj , stack<int> &s) {
        visit[curr] = 1;
        
        for(int i = 0 ; i < adj[curr].size() ; i++) {
            if(!visit[adj[curr][i].first]) {
                dfs(adj[curr][i].first , visit , adj , s) ;
            }
        }
        
        s.push(curr) ;
    }
    
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        //adj matrix
        vector<vector<pair<int,int>>> adj(V);
        for(int i = 0 ; i < E ; i++) {
            int u = edges[i][0] ;
            int v = edges[i][1] ;
            int w = edges[i][2] ;
            adj[u].push_back(make_pair(v , w)) ;
        }
        
        //topo sort 
        vector<bool> visit(V , 0) ;
        stack<int> s ;
        dfs(0 , visit , adj , s) ;
        
        //distance
        vector<int> dist(V , INT_MAX) ;
        dist[0] = 0 ;
        
        while(!s.empty()) {
            int temp = s.top() ;
            s.pop() ;
            
            for(int i = 0 ; i < adj[temp].size() ; i++) {
                int neigh = adj[temp][i].first ;
                int w = adj[temp][i].second ;
                dist[neigh] = min(dist[neigh] , w + dist[temp]) ;
            }
        }
        
        for(int i = 0 ; i < V ; i++) {
            if(dist[i] == INT_MAX) {
                dist[i] = -1 ;
            }
        }
        
        return dist ;
    }
};