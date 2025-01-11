#include <bits/stdc++.h>
using namespace std;

class Node {
    int data ;
    Node *left ;
    Node *right ;

    Node(int value) {
        data = value ;
        left = right = NULL ;
    }
};

int main() {
    queue<Node *> q ;
    int root , left , right ;
    cin >> x ;
    Node *root = new Node(root) ;
    q.push(root) ;

    while(!q.empty()) {
        Node *temp = q.front() ;
        q.pop() ;
        cin >> left ;
        if(left != -1) {
            temp->left = new Node(left) ;
            q.push(temp->left) ;
        }

        cin >> right ;
        if(right != -1) {
            temp->right = new Node(right) ;
            q.push(temp->right) ;
        }
    }

    return 0;
}