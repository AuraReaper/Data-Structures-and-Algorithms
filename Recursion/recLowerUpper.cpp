#include <bits/stdc++.h>
using namespace std;

string up(string str,int n) {
    if(n < 0) {
        return str ;
    }

    str[n] -= 32 ;

    return up(str,--n) ; 
}

int main() {
    string str = "yash" ;
    cout << up(str,str.size()-1) ;
    return 0;
}