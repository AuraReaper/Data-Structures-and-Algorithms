#include <stdio.h>

int main() {
    int tempC , tempF ;

    printf("Enter the temperature in Centigrades : \n") ;
    scanf("%d" , &tempC) ;

    tempF = ((1.8) * tempC) + 32 ;
    printf("The fahrenheit temperature is %d\n" , tempF) ;
    return 0 ;
}