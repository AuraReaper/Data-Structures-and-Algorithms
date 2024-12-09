#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define vertices 100

int queue[vertices];
bool visited[vertices] = {false};
int front = -1, rear = -1;

void push(int data) {
    if (rear == vertices - 1) {
        return;
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = data;
    }
}

void pop() {
    if (front == -1 || front > rear) {
        return;
    } else {
        front++;
    }
}

int peek() {
    return queue[front];
}

bool empty() {
    return (front == -1 || front > rear);
}

void BFS(int start, int v, int adjMatrix[vertices][vertices], int ans[], int *index) {
    push(start);
    visited[start] = true;

    while (!empty()) {
        int temp = peek();
        pop();
        ans[(*index)++] = temp; // Store the BFS traversal result in ans[]

        for (int i = 0; i < v; i++) {
            if (adjMatrix[temp][i] == 1 && !visited[i]) {
                push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int v = 4;
    int adjMatrix[vertices][vertices] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };

    int ans[vertices] = {0};
    int index = 0;

    printf("BFS starting from vertex 0:\n");
    BFS(0, v, adjMatrix, ans, &index);

    printf("BFS Traversal: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}