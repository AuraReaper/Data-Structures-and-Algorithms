#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        int n , k ;
        cin >> n >> k ;
        vector<int> box(n) ;
        for(int i = 0 ; i < n ; i++) {
            cin >> box[i] ;
        }

        if(k >= 2) {
            cout << "YES" << endl ;
        } else {
            vector<int> temp(box.begin() , box.end()) ;
            sort(temp.begin() , temp.end()) ;
            int count = 0 ;
            for(int i = 0 ; i < n ; i++) {
                if(temp[i]  != box[i]) {
                    cout << "NO" << endl ;
                    break ;
                } else {
                    count++ ;
                }
            }
            if(count == n) {
                cout << "YES" << endl ;
            }
        }
    }
    return 0;
}