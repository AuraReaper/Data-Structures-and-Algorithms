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
    for(int i = 0 ; i < n ; i++){
        printf("%d " , arr[i]) ;
    }
    return 0;
}