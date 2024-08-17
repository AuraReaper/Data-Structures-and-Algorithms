// merge 2 sorted list into third

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data ;
    struct Node* next ;
} node ;

node* head = NULL ;

node* createNode(int data) {
    node* newNode = (node *) malloc(sizeof(node)) ;
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

void traverse(node* head) {
    node* current = head ;
    while(current != NULL) {
        printf("%d " , current->data) ;
        current = current->next ;
    }
}

node* merge_sorted_list(node* list1 , node* list2) {
    node newNode ;
    node* ptr = &newNode ;
    newNode.next = NULL ;

    while(list1 != NULL && list2 != NULL) {
        if(list1->data <= list2->data) {
            ptr->next = list1 ;
            list1 = list1->next ;
        } else {
            ptr->next = list2 ;
            list2 = list2->next ;
        }

        ptr = ptr->next ;
    }

    if(list1 != NULL) {
        ptr->next = list1 ;
        list1 = list1->next ;
    }

    if(list2 != NULL) {
        ptr->next = list2 ;
        list2 = list2->next ;
    }

    return newNode.next ;
}

void print(node* head) {
    while(head != NULL) {
        printf("%d " , head->data) ;
        head = head->next ;
    }
    printf("NULL\n") ;
}
    
int main(){
    node* list1 = createNode(1) ;
    list1->next = createNode(2) ;
    list1->next->next = createNode(5) ;

    node* list2 = createNode(0) ;
    list2->next = createNode(4) ;
    list2->next->next = createNode(6) ;

    node* list3 = merge_sorted_list(list1 , list2) ;

    print(list3) ;
    return 0;
}