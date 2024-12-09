#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data ;
    struct Node* left ;
    struct Node* right ;
} node ;


struct Node* newNode(int data) {
    node* n = (node *)malloc(sizeof(node)) ;
    n->data = data ;
    n->left = NULL ;
    n->right = NULL ;
    return n ;
}

void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left) ;
        printf("%d ", root->data) ;
        inorder(root->right) ;
    }
}

void preorder(node* root) {
    if (root != NULL) {
        printf("%d ", root->data) ;
        preorder(root->left) ;
        preorder(root->right) ;
    }
}

void postorder(node* root) {
    if (root != NULL) {
        postorder(root->left) ;
        postorder(root->right) ;
        printf("%d ", root->data) ;
    }
}

int max(node* root) {
    if(root == NULL) {
        return -1 ;
    }
    int root_val = root->data ;
    int left_max = max(root->left) ;
    int right_max = max(root->right) ;
    int max_val = -1 ;
    if(root_val > left_max) {
        max_val = root_val ;
    } else {
        max_val = left_max ;
    }

    if(max_val < right_max) {
        max_val = right_max ;
    }

    return max_val ;
}

int min(node* root) {
    if (root == NULL) {
        return 100 ; 
    }
    int root_val = root->data ;
    int left_min = min(root->left) ; 
    int right_min = min(root->right) ;
    int min_val = 100 ;
    if(root_val < left_min) {
        min_val = root_val ;
    } else {
        min_val = left_min ;
    }

    if(min_val > right_min) {
        min_val = right_min ;
    }

    return min_val ;
}

int depth(node* root) {
    if(root == NULL) {
        return 0 ;
    } else {
        int left_depth = depth(root->left) ;
        int right_depth = depth(root->right) ;

        if(left_depth > right_depth) {
            return (left_depth + 1) ;
        } else {
            return (right_depth + 1) ;
        }
    }
}

int main() {
    struct Node* root = newNode(10) ;
    root->left = newNode(5) ;
    root->right = newNode(20) ;
    root->left->left = newNode(3) ;
    root->left->right = newNode(7) ;
    root->right->left = newNode(15) ;
    root->right->right = newNode(25) ;

    printf("Inorder traversal: ") ;
    inorder(root) ;
    printf("\n") ;

    printf("Preorder traversal: ") ;
    preorder(root) ;
    printf("\n") ;

    printf("Postorder traversal: ") ;
    postorder(root) ;
    printf("\n") ;

    printf("Maximum value in the tree: %d\n", max(root)) ;
    printf("Minimum value in the tree: %d\n", min(root)) ;
    printf("Depth of the tree: %d\n", depth(root)) ;

    return 0 ;
}