#include <stdio.h>
    
int main(){
    int count = 0 , n ;
    printf("n : ") ;
    scanf("%d" , &n) ;
    for(int i = 0 ; i <= n ;i++){
        if(n % i == 0){
            count++ ;
        }
    }
    if(count == 2){
        printf("Prime number") ;
    } else {
        printf("Not a prime number") ;
    }
    return 0;
}