#include <stdio.h>
    
int main(){
    int n , insert , loc ;
    printf("n : ") ;
    scanf("%d" , &n) ;
    int arr[n] ;
    printf("input array\n") ;
    for(int j = 0 ; j < n ; j++){
        scanf("%d" , &arr[j]) ;
    }
    printf("Enter element to be inserted ") ;
    scanf("%d" , &insert) ;
    printf("Enter location where element is be inserted ") ;
    scanf("%d " , &loc) ;
    n++ ;
    for(int i = n-1 ; i >= loc ; i--){
        arr[i] = arr[i-1] ;
    }
    arr[loc - 1] = insert ;
    for(int k = 0 ; k < (n+1) ; k++){
        printf("%d " , arr[k]) ;
    }
    return 0;
}