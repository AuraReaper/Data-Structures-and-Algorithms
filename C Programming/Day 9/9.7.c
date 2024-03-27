#include <stdio.h>
    
int main(){
    int n , fact = 1 , sum = 0 , temp = 0;
    printf("n : ") ;
    scanf("%d" , &n) ;
    int cnum = n ;
    while(cnum > 0){
        temp = cnum % 10 ;
        for(int i = 1 ; i <= temp ; i++){
            fact *= i ;
        }
        sum += fact ;
        fact = 1 ;
        cnum /= 10 ;
    }
    if(n == sum){
        printf("strong no.") ;
    } else {
        printf("not a strong no.") ;
    }
    return 0;
}