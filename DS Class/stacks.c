#include <stdio.h>
#include <stdlib.h>

// defining a node
typedef struct node {
    int data ;
    struct node *next ;
} node ;


//function to initalize a node with default values
node* create(int value) {
    node* temp = (node*)malloc(sizeof(node)) ;
    temp->data = value ;
    temp->next = NULL ;
    return temp ;
}

// define stack
typedef struct stack {
    node* top ; // points to top node
} stack ;
    
int main(){
    int arr[] = {10 , 20 , 30} ;
    stack* s1 = (stack*)malloc(sizeof(stack)) ;
    s1->top = NULL ;

    // push on stack
    for(int i = 0 ; i < 3 ; i++) {
        node* temp = create(arr[i]) ;
        if(temp == NULL) {
            printf("stack overflow\n") ;
            return -1 ;
        }
        temp->next = s1->top ;
        s1->top = temp ;
        printf("%d pushed to stack\n", arr[i]);
    }

    // pop from back
    if(s1->top == NULL) {
        printf("Stack Underflow\n") ;
        return -1;
    }
    node* temp = s1->top ;
    int popData = temp->data ;
    s1->top = temp->next ;
    free(temp) ;
    printf("pop data %d\n" , popData) ;

    // peep at top 
    if(s1->top != NULL) {
        printf("Top element is %d\n", s1->top->data);
    } else {
        printf("Stack is empty\n");
    }

    // free stack 
    free(s1) ;
    return 0;
}