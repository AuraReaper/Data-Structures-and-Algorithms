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
node *tail = NULL ;

int main() {
    int arr[] = {1 , 2 , 4} ;
    for(int i = 0 ; i < 3 ; i++) {
        if(head == NULL) {
            head = new node(arr[i]) ;
            tail = head ;
        } else {
            tail->next = new node(arr[i]) ;
            tail = tail->next ;
        }
    }

    cout << "before middle insertion" << endl ;
    node *dummy = head ;
    while(dummy != NULL) {
        cout << dummy->data << endl ;
        dummy = dummy->next ;
    }

    int x = 2 , val = 3 ;
    x-- ;
    node *temp = head ;
    node *temp2 = new node(val) ; // created a new node 
    while(x--) {
        temp = temp->next ;
    }
    temp2->next = temp->next ;
    temp->next = temp2 ;

    cout << "after middle insertion" << endl ;
    node *dummy2 = head ;
    while(dummy2 != NULL) {
        cout << dummy2->data << endl ;
        dummy2 = dummy2->next ;
    }
    return 0;
}