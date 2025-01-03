#include <bits/stdc++.h>
using namespace std;

//using dfs
bool dfscycle(int curr , vector<vector<int>> &adj , vector<bool> &visited , vector<bool> &path) {
    path[curr] = 1 ;
    visited[curr] = 1 ;

    for(int i = 0 ; i < adj[curr].size() ; i++) {
        if(path[adj[curr][i]]) {
            return 1 ;
        }

        if(visited[adj[curr][i]]) {
            continue ;
        }

        if(dfscycle(adj[curr][i] , adj , path , visited)) { // wk bhi c=ycle mila to return 1
            return 1 ;
        }
    }

    path[curr] = 0 ;

    return 0 ;
}


// kahn's algo used for topo sorting
// easy method
// 0 indegree nahi hoga to queue me jayega hi nahi
// dag ka hi topo sort nikalta hai jisko kahn's algo easy me nikal deta hai 
bool kahn(vector<vector<int>> &adj) {
    vector<int> indegree(adj.size() , 0) ;

    for(int i = 0 ; i < adj.size() ; i++) {
        for(int j = 0 ; j < adj[i].size() ; i++) {
            indegree[adj[i][j]]++ ;
        }
    }

    queue<int> q ;
    for(int i = 0 ; i < indegree.size() ; i++) {
        if(indegree[i] == 0) {
            q.push(i) ;
        }
    }

    int count = 0 ;

    while(!q.empty()) {
        int temp = q.front() ;
        q.pop() ;
        count++ ;

        for(int i = 0 ; i < adj[temp].size() ; i++) {
            indegree[adj[temp][i]]-- ;

            if(indegree[adj[temp][i]] == 0) {
                q.push(adj[temp][i]) ;
            }
        }
    }

    return count != adj.size() ;
}

int main() {
    
    
    return 0;
}