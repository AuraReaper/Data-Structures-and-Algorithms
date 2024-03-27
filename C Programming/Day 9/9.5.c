#include <stdio.h>
    
int main(){
    int a , b , lcm = 1 ;
    int gcd = 0 ;
    printf("a and b : ") ;
    scanf("%d%d" , &a , &b) ;
    for(int i = 1 ; i <= (a * b) ; i++){
        if(a % i == 0 && b % i == 0){
            lcm *= i ;
        }
    }
    gcd = (a * b) / lcm ;
    printf("lcm : %d " , lcm ) ;
    printf("gcd : %d " , gcd ) ;
    return 0;
}