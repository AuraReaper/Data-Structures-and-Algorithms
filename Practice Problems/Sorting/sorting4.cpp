// insertion sort in decreasing order
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
    
    //sorting
    for(int i = 1 ; i < n ; i++) {
        for(int j = i ; j > 0 ; j--) {
            if(arr[j] > arr[j-1]) {
                swap(arr[j] , arr[j-1]) ;
            } else {
                break ;
            }
        }
    }
    
    //output
    cout << "sorted: " ;
    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    return 0 ;
}