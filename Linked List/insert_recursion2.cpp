//insert at start
#include <bits/stdc++.h>
using namespace std;

class node{
    public :
    int data ;
    node *next ;

    node(int value) {
        data = value ;
        next = NULL ;
    }
} ;

node *head = NULL ;

node* createLinkedList(int arr[] , int index , int n , node* prev) {
    if(index == n) {
        return prev ;
    }

    node *temp = new node(arr[index]) ;
    temp->next = prev ;

    return createLinkedList(arr , index + 1 , n , temp) ;
}

int main() {
    int arr[] = {1 , 2 , 3 , 4} ;
    head = createLinkedList(arr , 0 , 4 , NULL) ;
    node *dummy = head ;
    while(dummy != NULL) {
        cout << dummy->data << endl ;
        dummy = dummy->next ;
    }
    return 0;
}