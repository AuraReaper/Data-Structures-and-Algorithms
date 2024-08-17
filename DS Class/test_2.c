// find second max

#include <stdio.h>
#include <stdlib.h>

// Function to return the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

typedef struct Node {
    int data;
    struct Node* next;
} node;

// Function to create a new node with given data
node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of the list
node* insert(node* head, int data) {
    node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    return head;
}

// Function to find the first maximum element in the list
int find_first_max(node* head) {
    node* temp = head;
    int first = -1; // Assumes all list elements are non-negative
    while (temp != NULL) {
        first = max(temp->data, first);
        temp = temp->next;
    }
    return first;
}

// Function to find the second maximum element in the list
int find_second_max(node* head, int first) {
    node* temp = head;
    int second = -1; // Assumes all list elements are non-negative
    while (temp != NULL) {
        if (temp->data < first) {
            second = max(second, temp->data);
        }
        temp = temp->next;
    }
    return second;
}

int main() {
    node* list1 = NULL;
    list1 = insert(list1, 6);
    list1 = insert(list1, 4);
    list1 = insert(list1, 1);

    int first = find_first_max(list1);
    int second = find_second_max(list1, first);

    printf("Ans: %d\n", second);

    return 0;
}