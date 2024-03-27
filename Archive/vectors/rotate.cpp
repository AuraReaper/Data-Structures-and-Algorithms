#include <bits/stdc++.h>
using namespace std;

//rotate a given array k times.
int main() {
    int n,k;
    cout << "enter arrya length: ";
    cin >> n;
    cout << "enter k: ";
    cin >> k;
    vector<int> arr(n);
    cout << "enter elemnts of array: \n";
    for(int &i : arr){
        cin >> i;
    }
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin() + k);
    reverse(arr.begin() + k,arr.end());
    for(int j : arr){
        cout << j;
    }
    return 0;
}