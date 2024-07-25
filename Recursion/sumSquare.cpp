#include <bits/stdc++.h>
using namespace std;

int sq(int n) {
    if(n == 1) {
        return 1 ;
    }

    return pow(n,2) + sq(n-1) ;
}

int main() {
    int n ;
    cin >> n ;
    cout << sq(n) ;
    return 0;
}