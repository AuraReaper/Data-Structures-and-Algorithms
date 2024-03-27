#include <bits/stdc++.h>
using namespace std ;

int maxArrOpti(int *arr,int idx,int n){
    if(idx == n-1){
        return arr[idx] ;
    }

    return max(arr[idx],maxArrOpti(arr,idx + 1,n)) ;
}

int maxArr(int *arr,int idx,int n,int maxNum){
    if(idx == n){
        return maxNum ;
    }

    maxNum = max(arr[idx],maxNum) ;

    return maxArr(arr,idx + 1 ,n,maxNum) ;
}

int main()
{
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i = 0;i < n;i++){
        cin >> arr[i] ;
    }

    cout << maxArr(arr,0,n,0) << " " << maxArrOpti(arr,0,n) << endl ;
    return 0 ;
}