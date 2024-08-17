#include <stdio.h>
#include <stdlib.h>
    
typedef struct Node {
    int data ;
    struct Node* next ;
} node ;

node* head = NULL ;

node* createNode(int data) {
    node* newNode = (node *)malloc(sizeof(node)) ;
    newNode->data = data ;
    newNode->next = NULL ;
    return newNode ;
}

node* insert(int data) {
    node* newNode = createNode(data) ;
    newNode->next = head ;
    head = newNode ;
    return head ;
}



int main(){
    
    return 0;
}