#include <stdio.h>
#include <ctype.h>
    
int main(){

    printf("Select the operation from the Menu\n") ;
    printf("A - Add\n") ;
    printf("S - Subtract\n") ;
    printf("M - Multiplication\n") ;
    printf("D - Division\n") ; 
    char menu ;
    scanf("%c" , &menu) ;
    int a , b ;
    printf("Enter 2 numbers : ") ;
    scanf("%d%d" , &a ,&b) ;

    switch (menu) {
    case 'a' :
            printf("Sum is : %d\n" , (a + b)) ;
            break;
    case 'b' :
            printf("Subtraction ; %d\n" , (a - b)) ;
            break ;
    case 'c' :
            printf("Product is : %d\n" , (a * b)) ;
            break ;
    case 'd' :
            printf("Quotient is : %d\n" , (a / b)) ;
            break ;
    default:
            printf("Incorrect choice\n") ;
            break;
    }
    return 0;
}