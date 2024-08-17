#include <bits/stdc++.h>
using namespace std;

int target(int arr[] , int index , int n , int sum) {
    if(sum == 0) {
        return 1 ;
    }

    if(index == n or sum < 0) {
        return 0 ;
    }

    return target(arr , index + 1 , n , sum) + target(arr , index , n , sum - arr[index]) ;
}

int main() {
    int arr[] = {2,3,4} ;
    int sum = 6 ;
    cout << target(arr,0,3,sum) << endl ;
    return 0;
}