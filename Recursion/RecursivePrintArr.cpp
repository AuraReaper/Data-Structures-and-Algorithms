#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int n,int i) {
    if(i ==  n) {
        return ;
    }
    cout << arr[i] ;
    print(arr,n,i+1) ;
}

int main() {
    int arr[] = {1,2,3,4,5} ;
    print(arr,5,0) ;
    return 0;
}