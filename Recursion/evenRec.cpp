#include <bits/stdc++.h>
using namespace std;

int eve(int arr[] , int n,int c) {
    if(n < 0) {
        return  c ;
    }

    if(arr[n] % 2 == 0) {
        c++ ;
    }

    return  eve(arr,n-1,c) ;
}

int main() {
    int arr[]= {1,2,3,4,5} ;
    cout << eve(arr,4,0) ;
    return 0;
}