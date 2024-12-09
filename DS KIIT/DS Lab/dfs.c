#include <stdio.h>
#include <stdbool.h>

#define VERTICES 4  // Define a constant for vertices

void dfs(int start, int adjMatrix[VERTICES][VERTICES], bool visited[], int ans[], int index) {
    visited[start] = true;
    ans[index] = start;

    for (int i = 0; i < VERTICES; i++) {
        if (adjMatrix[start][i] == 1 && !visited[i]) {
            dfs(i, adjMatrix, visited, ans, index + 1);
        }
    }
}

int main() {
    bool visited[VERTICES] = {false};
    int adjMatrix[VERTICES][VERTICES] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };
    int ans[VERTICES] = {0};  // Initialize ans array

    dfs(0, adjMatrix, visited, ans, 0);

    // Print the DFS traversal
    printf("DFS Traversal: ");
    for (int i = 0; i < VERTICES; i++) {
        if (visited[i]) {
            printf("%d ", ans[i]);
        }
    }

    return 0;
}