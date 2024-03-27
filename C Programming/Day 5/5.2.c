#include <stdio.h>

int main() {
    int distance , meter , kilometer ;
    printf("Enter the distance : ") ;
    scanf("%d" , &distance) ;
    kilometer = distance / 1000 ;
    meter = distance % 1000 ;
    printf("%d meter = %d Km and %d meters" , distance , kilometer , meter) ;
    return 0 ;
}