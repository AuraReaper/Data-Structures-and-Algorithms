#include <stdio.h>
    
int main(){
    int n , sum = 0 ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;
    int cn = n ;
    while (n > 0){
        sum += (n % 10) ;
        n /= 10 ;
    }
    printf("The sum of the digits %d is :%d " , cn , sum) ;
    return 0;
}