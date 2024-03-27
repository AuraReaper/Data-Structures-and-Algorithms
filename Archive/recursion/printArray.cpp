#include <bits/stdc++.h>
using namespace std ;

void print(int *arr,int idx,int n){
    if(idx == n){
        return ;
    }
    cout << arr[idx] << endl ;

    print(arr,idx + 1,n) ;
}

int main()
{
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i = 0;i < n;i++){
        cin >> arr[i] ;
    }
    
    cout << "Ans.\n";
    print(arr,0,n) ;
    return 0 ;
}