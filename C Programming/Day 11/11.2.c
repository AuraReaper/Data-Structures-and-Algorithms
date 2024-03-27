#include <stdio.h>
    
int main(){
    int n ;
    printf("n : ") ;
    scanf("%d" , &n) ;
    int arr[n] ;
    printf("input array\n") ;
    for(int j = 0 ; j < n ; j++){
        scanf("%d" , &arr[j]) ;
    }
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i] ;
    }
    printf("Average of array %d " , (sum/n)) ;
    return 0;
}