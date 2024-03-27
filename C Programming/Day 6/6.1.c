#include <stdio.h>

int main(){
    int num1 , num2 ,num3 ;
    printf("Enter num 1 : ") ;
    scanf("%d" , &num1) ;
    printf("Enter num 3 : ") ;
    scanf("%d" , &num2) ;
    printf("Enter num 3 : ") ;
    scanf("%d" , &num3) ;
    if(num1 > num2 && num1 > num3){
        printf("The largest number is %d : \n" , num1) ;
    } else if(num2 > num1 && num2 > num3){
        printf("The largest number is %d : \n" , num2) ;
    } else if(num3 > num1 && num3 > num2){
        printf("The largest number is %d : \n" , num3) ;
    } else {
        printf("numbers are equal\n") ;
    }
    return 0 ;
}