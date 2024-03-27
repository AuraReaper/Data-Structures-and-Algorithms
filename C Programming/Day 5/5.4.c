#include <stdio.h>

int main() {
    int input , sum ;
    prinf("Enter the number: ") ;
    scanf("%d" , &input) ;
    sum = (input / 100) + ((input % 100) / 10) + (input % 10) ;
    printf("Sum of digits is : %d" , sum) ;
    return 0 ;
}