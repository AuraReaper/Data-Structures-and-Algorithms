#include <iostream>
#include <vector>
using namespace std;

// Function to find divisible odd digits
void findOddDivisors(int n, int d) {
    // List of odd digits
    vector<int> oddDigits = {1, 3, 5, 7, 9};
    vector<int> result;

    // For n >= 5, all odd digits divide n!
    if (n >= 5) {
        for (int digit : oddDigits) {
            if (d % digit == 0) {
                result.push_back(digit);
            }
        }
    } else {
        // Compute n! for small values of n
        long long factorial = 1;
        for (int i = 2; i <= n; ++i) {
            factorial *= i;
        }
        for (int digit : oddDigits) {
            if (factorial % digit == 0 && d % digit == 0) {
                result.push_back(digit);
            }
        }
    }

    // Print the result
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;
        findOddDivisors(n, d);
    }

    return 0;
}

