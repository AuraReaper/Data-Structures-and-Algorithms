#include <stdio.h>
    
int main(){
    int n ,sum = 0;
    printf("n : ") ;
    scanf("%d" , &n) ;
    for(int i = 1 ; i < n ; i++){
        if(n % i == 0){
            sum += i ;
        }
    }
    if(sum == n){
        printf("Perfect number\n") ;
    } else {
        printf("Not perfect number\n") ;
    }
    return 0;
}