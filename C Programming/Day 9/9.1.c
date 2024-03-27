#include <stdio.h>
    
int main(){
    int temp = 1 , previous = 0 , current = 0 ;
    int n ;
    printf("n : ") ;
    scanf("%d" , &n) ;
    if(n == 0){
        return 0 ;
    }
    for(int i = 1 ; i <= n ; i++){
        printf("%d " , current) ;
        current = temp + previous ;
        temp = previous ;
        previous = current ;
    }
    return 0;
}