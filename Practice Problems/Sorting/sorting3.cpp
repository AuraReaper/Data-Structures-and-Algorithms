// bubble sort in reverse order
// hw of 25/3/14
#include <bits//stdc++.h>
using namespace std ;

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
    bool swapped ;
    for(int i = (n-2) ; i >= 0 ; i--) {
        swapped = 0 ;
        for(int j = i ; j > 0 ; j--) {
            if(arr[j] > arr[j-1]) {
                swap(arr[j] , arr[j-1]) ;
            }
        }
        if(swapped == 0) {
            break ;
        }
    }
    
    //output
    cout << "sorted: " ;
    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    return 0 ;
}