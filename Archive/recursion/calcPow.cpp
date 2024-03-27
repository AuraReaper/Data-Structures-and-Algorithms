#include <bits/stdc++.h>
using namespace std ;

int pow(int p, int q){
    if(q == 1){
        return p ;
    }
    return pow(p , q-1) * p ;
}

int main()
{
    int p , q ;
    cin >> p >> q ;

    cout << pow(p,q) << endl ;
    return 0 ;
}