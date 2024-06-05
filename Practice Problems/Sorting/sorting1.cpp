// selection sort in decreasing order
// hw of  25/3/24
#include <_xlocale.h>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cout << "size of array: " ;
    cin >> n ;
    int arr[n] ;
    
    // input
    cout << "enter elemnts of array: " ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    
    //sorting
    int index ;
    for(int i = 0 ; i < (n-1) ; i++) {
        index = i ;
        for(int j = (i+1) ; j < n ; j++) {
            if(arr[j] > arr[index]) {
                index = j ;
            }
        }
        swap(arr[i] , arr[index]) ;
    }
    
    //output
    cout << "sorted array: " ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}