#include <bits/stdc++.h>
using namespace std;

bool rabinKarp(string &s , string &p) {
    // step 1. utils
    int n = s.size() ;
    int m = p.size() ;
    int d = 256 , q = 13 ;

    // step 2 calc the value of h
    int h = 1 ;
    for(int i = 0 ; i < m -1 ; i++) {
        h = (h * d) % q ;
    }

    // step 3 find hash value of pattern and string
    int hashP = 0 , hashT = 0 ;
    for(int i = 0 ; i < m ; i++) {
        hashP = (hashP * d + p[i]) % q ;
        hashT = (hashT * d + s[i]) % q ;
    }

    // slide the window and check if hahs value mathchs or not and if yes
    // string matches or not

    for(int i = 0 ; i <= n - m ; i++) {
        if(hashP == hashT) {
            if(s.substr(i,m) == p) {
                return 1 ;
            }
        }
        if(i < n - m) {
            hashT = (d * (hashT - s[i] * h) + s[i + m]) % q ;
            if(hashT < 0) {
                hashT += q ;
            }
        }
    }

    return 0 ;

}

int main() {
    string s = "ABCCDDAEFG" ;
    string p = "CDD" ;

    bool ans = rabinKarp(s , p) ;

    cout << ans << endl ;

    return 0;
}