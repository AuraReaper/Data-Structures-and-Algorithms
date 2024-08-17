#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct stacks {
    int *arr ;
    int *minarr ;
    int size ;
    int capacity ;
} stack ; 

void init_stack(stack *stack) {
    stack->capacity = 4 ;
    stack->size = 0 ;
    stack->arr = (int *)malloc(stack->capacity * sizeof(int)) ;
    stack->minarr = (int *)malloc(stack->capacity * sizeof(int)) ;
}

void resize_stack(stack *stack , int new_capacity) {
    stack->arr = (int *)realloc(stack->arr , new_capacity * sizeof(int)) ;
    stack->minarr = (int *)realloc(stack->minarr , new_capacity * sizeof(int)) ;
    stack->capacity = new_capacity ;
}

void push(stack *stack , int value) {
    if(stack->size == stack->capacity) {
        resize_stack(stack , stack->capacity * 2) ;
    }
    stack->arr[stack->size] = value ;

    //min element update
    if(stack->size == 0) {
        stack->minarr[stack->size] = value ;
    } else {
        if(value < (stack->minarr[(stack->size) - 1])) {
            stack->minarr[stack->size] = value ;
        } else {
            stack->minarr[stack->size] = stack->minarr[(stack->size) - 1] ;
        }
    }
    stack->size++ ;
}

int pop(stack *stack) {
    if(stack->size == 0) {
        printf("stack underflow") ;
        return -1 ;
    }

    int pop = stack->arr[--(stack->size)] ;
    if(stack->size > 0 && stack->capacity > 4 && stack->size <= (stack->capacity / 4)) {
        resize_stack(stack , stack->capacity / 2) ;
    }

    return pop ;
}

int find_min(stack *stack) {
    if(stack->size == 0) {
        printf("empty stack") ;
        return -1 ;
    }
    return stack->minarr[stack->size - 1] ;
}

void print(stack *stack) {
    if(stack->size == 0) {
        printf("Stack is empty\n");
        return;
    }

    for(int i = 0 ; i < stack->size ; i++) {
        printf("%d ", stack->arr[i]);
    }
}

//free memory
void free1(stack *stack) {
    free(stack->arr) ;
    free(stack->minarr) ;
}

int main(){
    stack s1 ;
    init_stack(&s1) ;

    push(&s1 , 5) ;
    push(&s1 , 3) ;
    push(&s1 , 7) ;
    push(&s1 , 1) ;

    printf("Minimum: %d\n", find_min(&s1)); // Outputs 1
    printf("Popped data: %d\n", pop(&s1)); // Pops 1
    printf("Minimum: %d\n", find_min(&s1)); // Outputs 3
    print(&s1);
    free1(&s1);
    return 0;
}