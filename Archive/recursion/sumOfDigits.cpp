#include <bits/stdc++.h>
using namespace std ;

int sumDigits(int n){
    if((n/10) == 0){
        return n ;
    }
    return sumDigits(n/10) + n%10 ;
}

int main()
{
    int num;
    cin >> num ;
    cout << sumDigits(num) << endl ;
    return 0 ;
}