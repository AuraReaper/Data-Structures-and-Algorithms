#include <bits/stdc++.h>
using namespace std;

int power(int n , int a ) {
    if(a == 0) {
        return 1 ;
    }

    return n * power(n,a-1) ;
}

int main() {
    int n ;
    cin >> n ;
    int a ;
    cin >> a ;
    cout << power(n , a) ;
    return 0;
}