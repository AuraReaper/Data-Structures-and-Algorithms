// an array is given in decreasing order with key find the index of key ,
// if key is not present return -1.
// hw of 25/3/24

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int n ;
    cout << "size: " ;
    cin >> n ;
    int arr[n] ;

    //input
    cout << "elements: " ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    int key ;
    cout << "key: " ;
    cin >> key ;
    
    //searching
    int start = 0 ;
    int end = n - 1 ;
    int mid ;
    while(start <= end) {
        mid = start + ((end - start) / 2) ;
        if(arr[mid] == key){
            cout << mid ;
            return 1;
        } else if(key < arr[mid]) {
            start = mid + 1 ;
        } else {
            end = mid - 1 ;
        }
    }
    cout << "-1" ;
    return -1 ;
}