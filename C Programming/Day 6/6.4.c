#include <stdio.h>

int main(){
    int year ;
    prinf("Enter the year : ") ;
    scanf("%d" , &year) ;
    if(year % 4 == 0){
        printf("%d is a leap year") ;
    } else {
        printf("%d is a not a leap year") ;
    }
    return 0 ;
}