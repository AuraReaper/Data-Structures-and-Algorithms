// to find majority element in array having more than half occurences

#include <bits/stdc++.h>
using namespace std;

int voting(int arr[] , int n) {
    int candidate = -1 , votes = 0 ;
    for(int i = 0 ; i < n ; i++) {
        if(votes == 0) {
            candidate = arr[i] ;
            votes = 1 ;
        } else {
            if(arr[i] == candidate) {
                votes++ ;
            } else {
                votes-- ;
            }
        }
    }

    int count = 0 ;

    for(int j = 0 ; j < n ; j++) {
        if(arr[i] == candidate) {
            count++ ;
        }
    }

    if(count > (n / 2)) {
        return candidate ;
    }

    return -1 ;
}

int main() {
    int n ;
    cin >> n ;
    int arr[n] ;

    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }

    cout << voting(arr,n) ;
    return 0;
}