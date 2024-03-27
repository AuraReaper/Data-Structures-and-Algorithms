#include <bits/stdc++.h>
using namespace std;

// function to implement insertion sort.

int main() {
    int n ;
    cout << "enter size of array: " ;
    cin >> n ;
    int arr[n] ;
    
    cout << "enter elements: " ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    
    // insertion sort for increasing order.
    for(int i = 1 ; i < n ; i++) {
        for(int j = i ; j > 0 ; j--) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j] , arr[j-1]) ;
            } else {
                break ;
            }
        }
    }
    
    // printing sorted array.
    cout << "sorted array " ;
    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    return 0 ;
}