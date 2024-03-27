#include <bits/stdc++.h>
using namespace std ;

// program to implement selection sort.

int main() {
    int n ;
    cout << "enter size of the array " ;
    cin >> n ;
    int arr[n] ;
    cout << "enter elements of the array \n" ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    // implementing the algorithm for increasing order.
    int index ;
    for(int i = 0 ; i < (n-1) ; i++) {
        index = i ;
        for(int j = (i+1) ; j < n ; j++) {
            if(arr[j] > arr[j+1]) {
                index = j ;
            }
        }
        swap(arr[i],arr[index]) ;
    }
    
    // printing the sorted array.
    cout << "answer: " ;
    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    return 0 ;
}