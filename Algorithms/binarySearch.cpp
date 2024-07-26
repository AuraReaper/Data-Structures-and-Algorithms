#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , x ;
    cout << "enter n" << endl ;
    cin >> n ;
    int arr[n] ;
    cout << "enter target" << endl ;
    cin >> x ;
    cout << "enter elements" << endl ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    int start = 0 , end = n - 1 , mid ;
    while(start <= end) {
        mid = start + ((end - start) / 2) ;
        if(arr[mid] == x) {
            return 1 ;
        } else if(arr[mid] < x) {
            start = mid + 1 ;
        } else {
            end = mid - 1 ; 
        }
    }
    return 0;
}