#include <stdio.h>

int main() {
    int a , b , c ;
    printf("Enter num1 : ") ;
    scanf("%d" , &a) ;
    printf("Enter num2 : ") ;
    scanf("%d" , &b) ;
    printf("Before Swapping\n") ;
    printf("num1 : %d\n" , a) ;
    printf("num2 : %d\n" , b) ;
    a = b ;
    b = c ;
    c = a ;
    printf("After Swapping\n") ;
    printf("num1 : %d\n" , a) ;
    printf("num2 : %d\n" , b) ;

return 0 ; 
}