// Divide array in 2 sub array with equal sum
// conceft of prefix sum.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "size of array: " << endl ;
    cin >> n ;
    vector<int> arr(n) ;
    cout << "enetr elements of ana array" << endl ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    int total_sum = accumulate(arr.begin() , arr.end() , 0) ;
    int prefix = 0 , ans ;
    for(int j = 0 ; j < n ; j++) {
        prefix += arr[j] ;
        ans = total_sum - prefix ;
        if(ans == prefix){
            cout << "yes" << endl ;
            return 1 ;
        }
    }
    cout << "no" << endl ;
    return 0;
}