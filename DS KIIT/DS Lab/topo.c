#include <stdio.h>
#include <stdbool.h>

#define VERTICES 4  // Define a constant for vertices

void dfs(int start, int adjMatrix[VERTICES][VERTICES], bool visited[], int* stack , int* top) {
    visited[start] = true;

    for (int i = 0; i < VERTICES; i++) {
        if (adjMatrix[start][i] == 1 && !visited[i]) {
            dfs(i, adjMatrix, visited, stack , top);
        }
    }

    stack[*(top)++] = start ;
}

int main() {
    bool visited[VERTICES] = {false};
    int adjMatrix[VERTICES][VERTICES] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };
    int stack[VERTICES] ;
    int top = 0 ;

    for(int i = 0 ; i < VERTICES ; i++) {
        if(!visited[i]) {
            dfs(i, adjMatrix, visited, stack , top);
        }
    }

    return 0;
}