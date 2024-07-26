#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b) {
    if(b == 0) {
        return a ;
    }

    return gcd(b , a % b) ;
}

int main() {
    int a , b ;
    cout << enter a and b << endl ;
    cin >> a >> b ;
    cout << gcd(a,b) ;
    return 0;
}