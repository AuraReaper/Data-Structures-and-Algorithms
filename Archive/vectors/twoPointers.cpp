#include <bits/stdc++.h>
using namespace std;
//sort a given array containing only 0 and 1 and return the output containing 0 first and 1 at last.

void sortArray(vector<int> &arr){
    int left_ptr=0;
    int right_ptr=arr.size() - 1;
    while(left_ptr<right_ptr){
        if(arr[left_ptr]==1 && arr[right_ptr]==0){
            swap(arr[left_ptr++],arr[right_ptr--]);
        }
        if(arr[left_ptr]==0){
            left_ptr++;
        }
        if(arr[right_ptr]==1){
            right_ptr--;
        }

    }
}

int main() {
    int n;
    cout << "array length: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements containing only 0 and 1\n";
    for(int &i : arr){
        cin >> i;
    }
    sortArray(arr);
    cout << "answer: ";
    for(int l : arr){
        cout << l;
    }
    return 0;
}
