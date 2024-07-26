#include <bits/stdc++.h>
using namespace std;

int check(int arr[],int start , int end , int x) {
    if(start > end) {
        return -1 ;
    }
    int mid = start + ((end - start) / 2) ;
    if(arr[mid] == x) {
        return 1 ;
    } else if(arr[mid] < x) {
        return check(arr,mid+1,end,x) ;
    }

    return check(arr,start,mid-1,x) ;
}

int main() {
    int arr[] = {3,8,11,15,20,22} ;
    int target = 9999 ;
    cout << check(arr,0,5,target) ; 
    return 0;
}