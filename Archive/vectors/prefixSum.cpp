//given an integer array , return the prefix sum or running sum in the same array
#include <bits/stdc++.h>
using namespace std;

void prefixSum(vector<int> &arr){
    //loop starts from 1 because we do not need sum of first element.
    for(int i=1;i<arr.size();i++){
        arr[i] += arr[i-1];
    }
}

int main() {
    int n;
    cout<< "enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements \n";
    for(int &i : arr){
        cin >> i;
    }
    prefixSum(arr);
    cout << "amswer\n";
    for(int j : arr){
        cout << j << " ";
    }
    return 0;
}