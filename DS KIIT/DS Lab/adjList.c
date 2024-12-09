#include <stdio.h>
#include <stdlib.h>


typedef struct node {

    int vertex ;
    struct node* next ;

} node ;


typedef struct graph {

    int vertices ;
    node** adjList ;

} graph ;


node* createNode(int vertex) {

    node* newNode = (node*)malloc(sizeof(node)) ;
    newNode->vertex = vertex ;
    newNode->next = NULL ;

    return newNode ;
}

graph* createGraph(int vertices) {

    graph* newGraph = (graph*)malloc(sizeof(graph)) ;
    newGraph->vertices = vertices ;
    newGraph->adjList = (node**)malloc(vertices * sizeof(node*)) ;

    for(int i = 0 ; i < vertices ; i++) {
        newGraph->adjList[i] = NULL ;
    }

    return newGraph ;
}

void addEdge(graph* newGraph , int src , int dest) {

    node* newNode = createNode(dest) ;
    newNode->next = newGraph->adjList[src] ;
    newGraph->adjList[src] = newNode ;

    newNode = createNode(src) ;
    newNode->next = newGraph->adjList[dest] ;
    newGraph->adjList[dest] = newNode ;

}

void printGraph(graph* newGraph) {
    for (int v = 0; v < newGraph->vertices; v++) {
        node* temp = newGraph->adjList[v];
        printf("\n Vertex %d\n: ", v);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int vertices = 5;
    graph* newGraph = createGraph(vertices);
    addEdge(newGraph, 0, 1);
    addEdge(newGraph, 0, 4);
    addEdge(newGraph, 1, 2);
    addEdge(newGraph, 1, 3);
    addEdge(newGraph, 1, 4);
    addEdge(newGraph, 2, 3);
    addEdge(newGraph, 3, 4);

    printGraph(newGraph);

    return 0;
}