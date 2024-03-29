// given a distinct array in increasing order find the index
// at which the target can be inserted
// 28/2/24
// leetcode 35
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cout << "size: " ;
    cin >> n ;
    int arr[n] ;
    
    // input
    cout << "elements: " ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    int target ;
    cout << "target: " ;
    cin >> target ;
    
    // searching
    int index = -1 ;
    int start = 0 , end = n - 1 , mid ;;;
    while(start <= end) {
        mid = start + ((end - start) / 2) ;
        if(arr[mid] == target) {
            index = mid ;
            cout << index ;
            return index ;
        } else if(target < arr[mid]) {
            index = mid ;
            end = mid - 1 ;
        } else {
            start = mid + 1 ;
        }
    }
    if(index == -1) {
        index = n ;
    }
    cout << index << endl ;
    return -1 ;
}