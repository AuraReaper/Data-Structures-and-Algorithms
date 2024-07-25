#include <bits/stdc++.h>
using namespace std;

int mini(int arr[] , int n) {
    if(n == 0) {
        return arr[0] ;
    }
    int m = mini(arr,n-1) ;
    if(m > arr[n]) {
        m = arr[n] ;
    }
    return m ;
}

int main() {
    int arr[] = {3,4,5,6,8} ;
    cout << mini(arr , 4) ;
    return 0 ;
}