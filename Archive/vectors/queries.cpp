#include <bits/stdc++.h>
using namespace std;

//given q queries check if the given number is present in the array and its frequency.

int main() {
    int n;
    cout << "array size: ";
    cin >> n;
    vector<int> arr(n);
    const int size = 10 + 1e5;//because query can not be greater than trhis given in question.
    vector<int> freq(size,0);//initalizing all as 0.
    cout << "enter elements\n";
    for(int &i : arr){
        cin >> i;
    }
    for(int j=0;j<n;j++){
        freq[arr[j]]=1;
    }
    int q,qelement;
    cout << "enter query: ";
    cin >> q;
    while(q--){
        cin >> qelement;
        cout << "frequency: " << freq[qelement]<< endl;
    }
    return 0;
}