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
    int max = -1 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max) {
            max = arr[i] ;
        }
    }
    printf("Max of array %d " , max) ;
    return 0;
}