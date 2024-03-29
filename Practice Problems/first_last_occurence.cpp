// find the first and last position of an element/key in a sorted array
// 28/3/24
// letcode 34

#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cout << "size: " ;
    cin >> n;
    int arr[n] ;
    
    //array input
    cout << "enete elements: " ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    int key ;
    cout << "enter key: " ;
    cin >> key ;
    
    //sorting in increasing order using insertion sort
    for(int i = 1 ; i < n ; i++) {
        for(int j = i ; j > 0 ; j--) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j] , arr[j-1]) ;
            } else {
                break ;
            }
        }
    }
    
    //linear search "n" time complexity
    int first = n , last = -1 ;;
    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == key) {
            if(i > first) {
                last = i ;
            } else {
                first = i ;
            }
        }
    }
    if(first == n) {
        first = -1 ;
    }
    
    //binary search "log n " time complecity
    int bFirst = -1 , bLast = -1 ;;
    int start = 0 , end = n - 1 , mid ;;;
    while(start <= end) {
        mid = start + ((end - start) / 2) ;
        if(key == arr[mid]) {
            bFirst = mid ;
            end = mid - 1 ;  // cheking in left side for first occurence
        } else if (key > arr[mid]) {
            start = mid + 1 ; 
        } else {
            end = mid -1 ;
        }
    }
    
    start = 0 , end = n - 1 , mid = -1 ;;;
    while(start <= end) {
        mid = start + ((end - start) / 2) ;
        if(key == arr[mid]) {
            bLast = mid ;
            start = mid + 1 ;  // cheking in right side for last occurence
        } else if (key > arr[mid]) {
            start = mid + 1 ; 
        } else {
            end = mid -1 ;
        }
    }
    
    //output
    if(first != bFirst and last != bLast) {
        cout << "🤯🤯🤯🤯🤯🤯error🤯🤯🤯🤯🤯🤯" << endl ;
        return -1 ;
    }
    cout << "first: " << first << endl ;
    cout << "last: " << last << endl ;
        
    return 0 ;
}