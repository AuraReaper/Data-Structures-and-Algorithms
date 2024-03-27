#include <bits/stdc++.h>
using namespace std;

/* sort a given array and print even elements in beginning and odd ones at end, the order of
 elements does not matter.
 ....Two pointers
*/

void sortEvenOdd(vector<int> &arr){
    int left_ptr=0;
    int right_ptr=arr.size() - 1;
    while(left_ptr<right_ptr){
        if(arr[left_ptr]%2 !=0 && arr[right_ptr]%2 ==0){
            swap(arr[left_ptr++],arr[right_ptr--]);
        }
        if(arr[left_ptr]%2 ==0){
            left_ptr++;
        }
        if(arr[right_ptr]%2 !=0){
            right_ptr--;
        }
    }
}

int main() {
    int n;
    cout << "enter array length: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements\n";
    for(int &i : arr){
        cin >> i;
    }
    sortEvenOdd(arr);
    cout << "answer\n";
    for(int j : arr){
        cout << j;
    }
    return 0;
}