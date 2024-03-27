#include <stdio.h>
    
int main(){
    int num , rev = 0 ;
    printf("Enter number: ") ;
    scanf("%d" , &num) ;
    int cnum = num ;
    while(num > 0){
        rev = (rev * 10) + (num % 10) ;
        num /= 10 ;
    }
    printf("The reverse of %d is : %d" , cnum , rev) ;
    return 0;
}