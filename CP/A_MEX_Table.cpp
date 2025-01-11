#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        int n , m ;
        cin >> n >> m ;
        cout << max(n , m) + 1 << endl ;
    }
    return 0;
}