// Given an array arr[] of size N of distinct elements and a number X, 
// find if there is a pair in arr[] with product equal to X.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 7, 9, 22, 15, 344, 92, 8};
    int n = 8 ;
    sort(arr, arr + n);
    int x = 46 ;
    int start = 0 ;
    int end = n - 1 ;
    int pro = 0 ;
    while(start <= end) {
        pro = arr[start] * arr[end] ;
        if(pro == x) {
            cout << "yes" ;
            return 1 ;
        } else if(pro > x) {
            end-- ;
        } else {
            start++ ;
        }
    }
    cout << "no" ;
    return 0;
}