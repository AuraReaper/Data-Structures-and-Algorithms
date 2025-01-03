#include <bits/stdc++.h>
using namespace std;

// 2 coluring algorithm is used to check for bipartite graph


// using bfs and colur algo
bool bfscolour(vector<vector<int>>& graph) {
    vector<int> colour(graph.size() , -1) ;
    queue<int> q ;
    q.push(0) ;
    colour[0] = 0 ;
    int temp ;
    while(!q.empty()) {
        temp = q.front() ;
        q.pop() ;
        for(int i = 0 ; i < graph[temp].size() ; i++) {
            if(colour[graph[temp][i]] == -1) {
                colour[graph[temp][i]] = (colour[temp] + 1) % 2 ;
                q.push(graph[temp][i]) ;
            } else {
                if(colour[temp] == colour[graph[temp][i]]) {
                    return 0 ;
                }
            }
        }
    }

    return 1 ;
}


// dfs and colour algo
bool dfscolour(int curr , vector<int> &col , vector<vector<int>> &adj) {

    for(int i = 0 ; i < adj[curr].size() ; i++) {
        if(col[adj[curr][i]] == -1) {
            col[adj[curr][i]] = (col[curr] + 1) % 2 ;
            if(!dfscolour(adj[curr][i] , col , adj)) {
                return 0 ;
            }
        } else {
            if(col[curr] == col[adj[curr][i]]) {
                return 0 ;
            }
        }
    }

    return 1 ;
}


int main() {
    // from o to V run a loop and check that all nodes are coloured and then  declare the answer 

    vector<int> col(adj.size() , -1) ;
    for(int i = 0 ; i < adj.size() ; i++) {
        if(col[i] == -1) {
            col[i] = 0 ;
            if(!dfscolour(i , col , adj)) {
                return 0 ;
            }
        } 
    }
    return 1 ;
}