#include <bits/stdc++.h>
using namespace std;

//given a sorted array maybe negative return the squares of the elements in sorted format.

int main() {
    int n;
    cout << "array size: ";
    cin >> n;
    vector<int> inputArr(n);
    vector<int> outputArr(n);
    cout << "enter array elements can be negative\n";
    for(int &i : inputArr){
        cin >> i;
    }
    for(int j=0;j<n;j++){
        outputArr[j]=pow(inputArr[j],2);
    }
    sort(outputArr.begin(),outputArr.end());
    cout << "answer: ";
    for(int k : outputArr){
        cout << k << " ";
    }
    return 0;
}