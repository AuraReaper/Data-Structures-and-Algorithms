#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data ;
    node *next ;

    //constructor
    node(int value) {
        data = value ;
        next = NULL ;
    }
} ;

node *head = NULL ; // always stores address of first list
node *tail = NULL ; // always stores address of last list

int main() {
    int arr[] = {1 ,2 , 3 , 4} ;

    //insert at end
    for(int i = 0 ; i < 4 ; i++) {
        if(head == NULL) {
            head = new node(arr[i]) ;
            tail = head ;
        } else {
            tail->next = new node(arr[i]) ;
            tail = tail->next ;
        }
    }

    node *temp = head ;
    while(temp != NULL) {
        cout << temp->data << endl ;
        temp = temp->next ;
    }
    return 0;
}