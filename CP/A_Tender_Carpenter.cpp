#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canFormTriangle(ll a, ll b, ll c) {
    return a + b > c && b + c > a && c + a > b;
}

// Check if segment [l,r] is stable
bool isStableSegment(const vector<ll>& a, int l, int r) {
    for (int i = l; i <= r; i++) {
        for (int j = l; j <= r; j++) {
            for (int k = l; k <= r; k++) {
                if (!canFormTriangle(a[i], a[j], a[k])) {
                    return false;
                }
            }
        }
    }
    return true;
}

// Count valid partitions up to 2
int countValidPartitions(const vector<ll>& a, int pos, int count, int parts) {
    int n = a.size();
    if (count >= 2) return count;  // Early return if we found 2 valid partitions
    if (pos == n) {
        if (parts > 0) count++;  // Valid partition found
        return count;
    }
    
    // Try all possible segments starting at pos
    for (int len = 1; pos + len <= n; len++) {
        if (!isStableSegment(a, pos, pos + len - 1)) continue;
        count = countValidPartitions(a, pos + len, count, parts + 1);
        if (count >= 2) return count;  // Early return
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int validPartitions = countValidPartitions(a, 0, 0, 0);
    cout << (validPartitions >= 2 ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}