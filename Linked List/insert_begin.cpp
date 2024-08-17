// inserting a linked list from start

#include <bits/stdc++.h>
using namespace std;

class node {
    public :
    int data ;
    node *next ;

    //constructor
    node(int value) {
        data = value ;
        next = NULL ;
    }

};

node *head = NULL ;

int main() {
    // inserting node  at start
    int arr[] = {1 , 2 , 3 , 4 , 5} ;

    for(int i = 0 ; i < 5 ; i++) {
        if(head == NULL) {
            head = new node(arr[i]) ;
        } else {
            node *temp = new node(arr[i]) ;
            temp->next = head ;
            head = temp ;
        }
    }

    // traversing 
    node *temp = head ;
    while(temp != NULL) {
        cout << temp->data << endl ;
        temp = temp->next ;
    }
    
    return 0;
}