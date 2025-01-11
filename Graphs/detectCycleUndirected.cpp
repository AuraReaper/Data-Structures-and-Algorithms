#include <bits/stdc++.h>
using namespace std;


// using dfs
bool dfscycle(int curr , int parent , vector<vector<int>> &adj , vector<bool> &visited) {
    visited[curr] = 1 ;

    for(int i = 0 ; i < adj[curr].size() ; i++) {
        if(adj[curr][i] == parent) {
            continue ;
        }
        if(visited[adj[curr][i]] == 1) {
            return 1 ;
        }
        if(dfscycle(adj[curr][i] , curr , adj , visited)) {
            return 1 ;
        }
    }

    return 0 ;
}

// using bfs
bool bfscycle(int curr , vector<vector<int>> & adj , vector<bool> &vis) {
    queue<pair<int,int>> q ;
    q.push(make_pair(curr , -1)) ;
    vis[curr] = 1 ;

    pair<int , int > temp ; 

    while(!q.empty()) {
        temp = q.front() ;
        q.pop() ;
        int curr = temp.first ;
        int parent = temp.second ;
        for(int i = 0 ; i < adj[curr][size] ; i++) {
            if (adj[curr][i] == parent) {
                continue ; 
            } else if(vis[adj[curr][i]]) {
                return 1 ;
            } else {
                vis[adj[curr][i]] = 1 ;
                q.push(make_pair(adj[curr][i] , curr)) ;
            }
        }
    }

    return 0
}

int main() {
    

    // for dfs 
    vector<bool> visited(adj.size() , 0) ;
    for(int i = 0 ; i < adj.size() ; i++) {
        if(!visited[i] and dfscycle(i , -1 , adj , visited)) {
            return 1 ;
        }
    }

    // for bfs
    vector<bool> vis(adj.size() , 0) ;
    for(int i = 0 ; i < adj.size() ; i++) {
        if(!visited[i] and bfscycle(i , adj , vis)) {
            return 1 ;
        }
    }

    return 0;
}



