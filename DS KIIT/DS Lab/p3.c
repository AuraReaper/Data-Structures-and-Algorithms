#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Stack {
    int top ;
    int capacity ;
    char* array ;
} stack ;

stack* createStack(int capacity) {
    stack* s = (stack *)malloc(sizeof(stack)) ;
    s->capacity = capacity ;
    s->top = -1 ;
    s->array = (char *)malloc(s->capacity * sizeof(char)) ;
    return s ;
}

int isStackFull(stack* s) {
    return s->top == s->capacity - 1 ;
}

int isStackEmpty(stack* s) {
    return s->top == -1 ;
}

void push(stack* s, char item) {
    if (isStackFull(s))
        return ;
    s->array[++s->top] = item ;
}

char pop(stack* s) {
    if (isStackEmpty(s))
        return '\0' ;
    return s->array[s->top--] ;
}


typedef struct Node {
    char data ;
    struct Node* next ;
} node ;

typedef struct Queue {
    node* start ;
    node* end ;
} queue ;

queue* createQueue() {
    queue* q = (queue *)malloc(sizeof(queue));
    q->start = q->end = NULL ;
    return q ;
}

int isQueueEmpty(queue* q) {
    return q->start == NULL ;
}

void enqueue(queue* q, char item) {
    node* temp = (node*)malloc(sizeof(node)) ;
    temp->data = item ;
    temp->next = NULL ;
    if (q->end == NULL) {
        q->start = q->end = temp ;
        return ;
    }
    q->end->next = temp ;
    q->end = temp ;
}

char dequeue(queue* q) {
    if (isQueueEmpty(q))
        return '\0' ;
    node* temp = q->start ;
    char data = temp->data ;
    q->start = q->start->next ;
    if (q->start == NULL)
        q->end = NULL ;
    free(temp) ;
    return data ;
}

int isPalindrome(const char* str) {
    int len = strlen(str) ;
    stack* s = createStack(len) ;
    queue* q = createQueue() ;

   
    for (int i = 0; i < len; i++) {
        if (isalnum(str[i])) {
            char lowerChar = tolower(str[i]) ;
            push(s, lowerChar) ;
            enqueue(q, lowerChar) ;
        }
    }

  
    while (!isStackEmpty(s)) {
        if (pop(s) != dequeue(q)) {
            return 0 ;
        }
    }

    return 1 ;
}

int main() {
    char str[] = "yash" ;
    if (isPalindrome(str))
        printf("True\n") ;
    else
        printf("False\n") ;
    return 0 ;
}