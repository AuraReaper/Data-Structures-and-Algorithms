#include <bits/stdc++.h>
using namespace std;

class node {
    public :
    int data ;
    node *next ;

    node(int value) {
        data = value ;
        next = NULL ;
    }
} ;

node *head = NULL ;

node* createLinkedList(int arr[] , int index , int n) {
    if(index == n) {
        return NULL ;
    }

    node *temp = new node(arr[index]) ;
    temp->next = createLinkedList(arr , index + 1 , n) ;

    return temp ;
}

int main() {
    int arr[] = {1 , 2 , 3 , 4} ;
    head = createLinkedList(arr , 0 , 4) ;
    node *dummy = head ;
    while(dummy != NULL) {
        cout << dummy->data << endl ;
        dummy = dummy->next ;
    }
    return 0;
}