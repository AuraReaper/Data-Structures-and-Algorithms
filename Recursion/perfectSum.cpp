#include <bits/stdc++.h>
using namespace std;

int countSum(int arr[] , int index , int n , int sum  ) {

    if(index == n) {
        // if(sum == 0) {
        //     return 1 ;
        // } else {
        //     return 0 ;
        // }
        return sum == 0 ;
    }

    return countSum(arr , index + 1 , n , sum) + countSum(arr , index + 1 , n , sum - arr[index]) ;
}

int main() {
    int arr[] = {5,2,10,3,6,8,0} ;
    int sum = 10 ;
    int count = countSum(arr , 0 , 7 , sum) ;
    cout << count << endl ;
    return 0;
}