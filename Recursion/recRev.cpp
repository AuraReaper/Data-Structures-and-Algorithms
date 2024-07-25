#include <bits/stdc++.h>
using namespace std;

string rev(string str,int start,int end) {
    if(start >= end) {
        return str ;
    }

    swap(str[start] , str[end]) ;

    return rev(str,++start,--end) ;
}

int main() {
    string str = "pyash" ;
    cout << rev(str,0,str.size()-1) ;
    return 0;
}