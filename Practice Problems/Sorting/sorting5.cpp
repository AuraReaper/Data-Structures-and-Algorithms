// insertion sort in reverse direction
// hw of 25/3/24

#include <bits/stdc++.h>
using namespace std;

int main(){
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
    for(int i = n ; i > 1 ; i--) {
        for(int j = 0 ; j < i ; j++) {
            if(arr[j] < arr[j+1]) {
                swap(arr[j] , arr[j+1]) ;
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