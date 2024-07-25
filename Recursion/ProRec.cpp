#include <bits/stdc++.h>
using namespace std;

int pro(int arr[] , int n) {
    if(n == 0) {
        return arr[0] ;
    }

    return arr[n] * pro(arr,n-1) ;
}

int main() {
    int arr[] = {1,2,3,4,5} ;
    cout << pro(arr,4) ;
    return 0;
}