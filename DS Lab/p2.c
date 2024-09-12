#include <stdio.h>
#include <stdlib.h>


typedef struct Stack {
    int top ;
    int capacity ;
    int* array ;
} stack ;

stack* createStack(int capacity) {
    stack* s = (stack *)malloc(sizeof(stack)) ;
    s->capacity = capacity ;
    s->top = -1 ;
    s->array = (int *)malloc(s->capacity * sizeof(int)) ;
    return s ;
}

int isStackFull(stack* s) {
    return s->top == s->capacity - 1 ;
}

int isStackEmpty(stack* s) {
    return s->top == -1 ;
}

void push(stack* s , int item) {
    if (isStackFull(s)) {
        return ;
    }
    s->array[++s->top] = item ;
}

int pop(stack* s) {
    if (isStackEmpty(s)) {
        return -1 ;
    }
    return s->array[s->top--] ;
}


typedef struct QueueStacks {
    stack* stack1 ;
    stack* stack2 ;
} qus;

qus* createQueueStacks(int capacity) {
    qus* q = (qus *)malloc(sizeof(qus)) ;
    q->stack1 = createStack(capacity) ;
    q->stack2 = createStack(capacity) ;
    return q ;
}

void enqueue(qus* q, int item) {
    push(q->stack1 , item) ;
}

int dequeue(qus* q) {
    if (isStackEmpty(q->stack2)) {
        while (!isStackEmpty(q->stack1)) {
            push(q->stack2, pop(q->stack1)) ;
        }
    }
    return pop(q->stack2) ;
}

int peek(qus* q) {
    if (isStackEmpty(q->stack2)) {
        while (!isStackEmpty(q->stack1)) {
            push(q->stack2, pop(q->stack1));
        }
    }
    return q->stack2->array[q->stack2->top];
}

int isEmpty(qus* q) {
    return isStackEmpty(q->stack1) && isStackEmpty(q->stack2);
}

int main() {
    qus* q = createQueueStacks(100);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printf("Dequeued: %d\n", dequeue(q)) ; 
    printf("Front element: %d\n", peek(q)) ; 
    printf("Dequeued: %d\n", dequeue(q)) ; 
    printf("Is queue empty? %d\n", isEmpty(q)) ; 
    printf("Dequeued: %d\n", dequeue(q)) ; 
    printf("Is queue empty %d\n", isEmpty(q)) ; 

    return 0;
}