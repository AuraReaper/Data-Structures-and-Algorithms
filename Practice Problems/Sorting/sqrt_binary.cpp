// find the square root of x.
// 28/3/24
// leetcode 69

#include <bits/stdc++.h>
using namespace std ;

int main() {
    int x ;
    cout << "enter x: " ;
    cin >> x ;
    
    //using binary search algorithm.
    long ans = -1 ;
    long long int start = 0 , end = x , mid ;;;
    while(start <= end) {
        mid = start + ((end - start) / 2) ;
        if(x == (mid * mid)) {
            ans = mid ;
            cout << ans << endl ;
            return ans ;
        } else if ( x > (mid * mid)) {
            start = mid + 1 ;
        } else {
            ans = mid ;
            end = mid - 1 ;
        }
    }
    cout << mid << endl ;
    return mid ;
}