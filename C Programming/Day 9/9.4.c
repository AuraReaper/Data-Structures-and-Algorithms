#include <stdio.h>
    
int main(){
    int n ;
    printf("n : ") ;
    scanf("%d" , &n) ;
    int temp = 2 , previous = 1 , current = 1 ;
    for(int i = 1 ;i <= n ;i++){
        printf("%d " , current) ;
        current = temp + previous ;
        temp = previous ;
        previous = current ;
    }
    return 0;
}