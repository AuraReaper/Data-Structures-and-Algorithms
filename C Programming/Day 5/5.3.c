#include <stdio.h>

int main() {
    int input , output ;
    printf("Enter the number ") ;
    sacnf("%d" , &input) ;
    output = (input / 100000) + (input % 10) ;
    printf("Sum of digits is: %d" , output) ;
    return 0 ;
}