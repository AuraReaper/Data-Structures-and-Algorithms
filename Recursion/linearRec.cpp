#include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int n,int x) {
    if(n < 0) {
        return false ;
    }

    if(arr[n] == x) {
        return true ;
    }

    return check(arr,--n,x) ;
}
int main() {
    int arr[] = {2,4,7,3,11,8,12} ;
    int target = 9 ;
    cout << check(arr,7,target) ;
    return 0;
}