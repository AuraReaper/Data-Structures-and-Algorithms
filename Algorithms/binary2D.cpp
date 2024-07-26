#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m , x ;
    cout << "enter n amd m " << endl ;
    cin >> m >> n ;
    int arr[m][n] ;
    cout << "enter elements" << endl ;
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> arr[i][j] ;
        }
    }
    cout << "enter target" << endl ;
    cin >> x ;
    int start = 0 , end = (m * n) - 1 , mid ;
    while(start <= end) {
        mid = start + ((end - start) / 2) ;
        if(arr[mid/n][mid%n] == x) {
            cout << 1 ;
            return 1 ;
        } else if(arr[mid/n][mid%n] < x) {
            start = mid + 1;
        } else {
            end = mid - 1 ;
        }
    }
    return 0;
}