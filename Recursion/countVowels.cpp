#include <bits/stdc++.h>
using namespace std;

int count(string str , int n , int c) {
    if(n == -1) {
        return c ;
    }

    if(str[n] == 'a' or str[n] == 'e' or str[n] == 'i' or str[n] == 'o' or str[n] == 'u') {
        c++ ;
    }

    return count(str,--n,c) ;
}

int main() {
    string str = "manos" ;
    int n = str.size() - 1;
    cout << count(str,n,0) ;
    return 0;
}