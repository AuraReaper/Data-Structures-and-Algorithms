#include <bits/stdc++.h>
using namespace std ;

int sumArray(int *arr,int idx,int n){
    if(idx == n-1){
        return arr[idx] ;
    }

    return  arr[idx] + sumArray(arr,idx + 1,n) ;    
}

int main()
{
    int n ;
    cin >> n ;
    int arr[n] ;

    for(int i = 0;i < n;i++){
        cin >> arr[i] ;
    }

    cout << sumArray(arr,0,n) << endl ;
    return 0 ;
}