#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , days ;
    cout << "enter number of parcels " ;
    cin >> n ;
    cout << "enter number of days " ;
    cin >> days ;
    vector<int> weights(n) ;
    cout << "enter weights\n" ;
    for(int i = 0 ; i < n ; i++) {
        cin >> weights[i] ;
    }
    int start = *max_element(weights.begin(), weights.end()) ;
    int end = accumulate(weights.begin() , weights.end() , 0) ;
    int mid = 0 , ans = 0 ;
    while(start <= end) {
        int count = 1 , total = 0 ;
        mid = start + ((end - start) / 2) ;
        for(int i = 0 ; i < n ; i++) {
            total += weights[i] ;
            if(total > mid) {
                count++ ;
                total = weights[i] ;
            }
        }
        if(count < days) {
            end = mid - 1 ;
            ans = mid ;
        } else {
            start = mid + 1 ;
        }
    }
    cout << ans << endl ;
    return ans;
}