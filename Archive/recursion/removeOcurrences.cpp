#include <bits/stdc++.h>
using namespace std ;

string remove(string &a,int idx,int n){
    if(idx == n){
        return "" ;
    }
    string ans = "" ;
    ans += a[idx] ;
    return ((a[idx] == 'a') ? "" : ans) + remove(a,idx + 1,n);
}

int main()
{
    string a = "abcax" ;

    cout << remove(a,0,5) ;
    return 0 ;
}