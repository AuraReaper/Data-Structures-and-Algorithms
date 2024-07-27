#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data ;
    node *next ;
} node ;

void insert(int data , node **head) {
    node *newNode = (node *)malloc(sizeof(node)) ;
    newNode->data = data ;
    newNode->next = *head ;
    *head = newNode ;
}
    
int main(){
    node *head = NULL ; // important
    insert(10,&head) ;
    insert(20,&head) ;
    insert(30,&head) ;
    return 0;
}