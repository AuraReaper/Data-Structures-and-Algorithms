#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "enter n : " ;
    cin >> n ;
    long arr[n] ;
    cout << "enter elements of an array\n" ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    int start = 0 ; 
    int end = n - 1 ;
    while(start <= end) {
        int mid = end  - ((end - start) / 2) ;
        if((arr[mid] > arr[mid - 1]) and (arr[mid] > arr[mid + 1])){
            cout << mid ;
            return mid ;
        } else if(arr[mid] > arr[mid - 1]) {
            start = mid + 1 ;
        } else {
            end = mid - 1 ;
        }
    }
    return 0;
}