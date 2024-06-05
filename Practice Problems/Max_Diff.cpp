// Max difference between 2 elements.


/* Given an array arr[] of integers, find out the maximum difference
 between any two elements such that larger element appears after the smaller number. */

// Examples : 
/**
Input : arr = {2, 3, 10, 6, 4, 8, 1}
Output : 8
Explanation : The maximum difference is between 10 and 2.

Input : arr = {7, 9, 5, 6, 3, 2}
Output : 2
Explanation : The maximum difference is between 9 and 7.
*/
#include <bits/stdc++.h>
using namespace std;

int my_approach(vector<int> &arr) {
    // O(n^2) time complexity
    long long ans = INT_MIN , maxi ;
    for(int j = 1 ; j < arr.size() ; j++) {
        maxi = *max_element(arr.begin() + j + 1 , arr.end()) ;
        ans = max(ans , (maxi - arr[j])) ;
    }
    return ans ;
}

int main() {
    int n ;
    cout << "n: " ;
    cin >> n ;
    vector<int> arr(n) ;
    cout << "elements\n" ;
    for(int i = 0 ; i < arr.size() ; i++) {
        cin >> arr[i] ;
    }

    cout << my_approach(arr) << endl ;
    return 0;
}