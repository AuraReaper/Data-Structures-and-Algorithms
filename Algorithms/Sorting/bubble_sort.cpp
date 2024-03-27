#include <bits/stdc++.h>
using namespace std ;

// function to implemnt bubble sorting.

int main() {
    int n ;
    cout << "enter size of array: " ;
    cin >> n ;
    int arr[n] ;
    
    cout << "enter elemnts \n" ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    
    // sorting in increasing order.
    bool swapped ;
    for(int i = (n-2) ; i >= 0 ; i--) {
        swapped = 0 ;
        for(int j = 0 ; j <= i ; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]) ;
                swapped = 1 ;
            }
        }
        if(swapped == 0) {
            break ; 
        }
    }
    
    // printing the sorted array.
    cout << "the sorted array: " ;
    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    return  0 ;
}