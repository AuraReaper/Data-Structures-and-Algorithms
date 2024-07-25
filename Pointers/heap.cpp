#include <bits/stdc++.h>
using namespace std;

int main() {
    int *ptr = new int ;
    *ptr = 5 ;
    cout << *ptr ;
    delete ptr ;
    return 0;
}