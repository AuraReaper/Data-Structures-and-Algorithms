#include <stdio.h>

int main() {
    float b , h , area ;
    printf("Enter the height of the triangle : \n") ;
    scanf("%f" , &h) ;
    printf("Enter the base of the triangle : \n") ;
    scanf("%f" , &b) ;

    area = 0.5 * (b * h) ;
    printf("The area of the triangle is : %f\n" , area) ;
    return 0 ;
}