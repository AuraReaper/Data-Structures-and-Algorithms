#include <stdio.h>

int main(){
    int month ;
    printf("Enter month : ") ;
    scanf("%d" , &month) ;
    if(month == 2){
        printf("28 days\n") ;
    } else if (month == 8){
        printf("31 days") ;
    } else if(month % 2 == 0){
        printf("30 days") ;
    } else {
        printf("31 days") ;
    }
    return 0;
}