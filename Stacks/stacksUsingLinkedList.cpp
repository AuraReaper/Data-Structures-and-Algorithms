#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data ;
    Node *next ;

    Node(int value) {
        data = value ;
        next = nullptr ;
    }
} ;

class Stack {
    public :
    Node *top ;
    int size ;

    Stack() {
        top = nullptr ;
        size = 0 ;
    }

    void push(int val) {
        Node *temp = new Node(val) ;
        if(temp == nullptr) {
            cout << "stack overflow\n" ;
            return ;
        }
        temp->next = top ;
        top = temp ;
        size++ ;
    }

    void pop() {
        if(top == nullptr) {
            cout << "stack underflow\n" ;
            return ;
        }
        Node *temp = top ;
        size-- ;
        top = top->next ;
        delete temp ;
    }

    int peek() {
        if(top == nullptr) {
            cout << "stack is empty\n" ;
            return -1 ;
        }

        return top->data ;
    }

    int issize() {
        return size ;
    }

    bool isempty() {
        if(size == 0) {
            return 1 ;
        } else {
            return 0 ;
        }
    }
} ;

int main() {
    
    return 0;
}