// to find maximum subarray

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cout << "enter n" << endl ;
    cin >> n ;
    int arr[n] ;
    cout << "enter elements" << endl ;

    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    int maxi INT_MIN ;
    int prefix = 0 ;
    for(int i = 0 ; i < n ; i++) {
        prefix += arr[i] ;
        maxi = max(prefix,maxi) ;
        if(prefix < 0) {
            prefix = 0 ;
        }
    }
    return 0;
}