#include <stdio.h>
#include <math.h>
    
int main(){
    int n ;
    printf("Enter n :") ;
    scanf("%d" , &n) ;
    int sum = 0 ;
    for(int i = 1 ; i <= n ; i++){
        sum += sqrt(i) ;
    }
    printf("Sum is %d " , sum) ;
    return 0;
}