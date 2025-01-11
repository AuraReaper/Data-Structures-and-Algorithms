#include <bits/stdc++.h>
using namespace std ;

class Stack {
    int *arr ;
    int size ;
    int top ;
    public :
    Stack(int s) {
        top = -1 ;
        size = s ;
        arr = new int[s] ;
    }

    void push(int val) {
        if(top == size - 1) {
            cout << "stack overflow\n" ;
            return ;
        }
        top++ ;
        arr[top] = val ;
    }

    void pop() {
        if(top == -1) {
            cout << "stack undetflow\n" ;
            return ;
        }

        top-- ;
    }

    int peek() {
        if(top != -1) {
            return arr[top] ;
        } else {
            cout << "stack is empty\n" ;
        }
    }

    int issize() {
        return top + 1 ;
    }

    bool isempty() {
        if(top == -1) {
            return 1 ;
        } else {
            return 0 ;
        }
    }
} ;

int main() {
    Stack s(5) ;
    s.pop() ;
    s.peek() ;
    s.issize() ;
    s.isempty() ;
    return 0;
}