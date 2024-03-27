#include <stdio.h>
    
int main(){
    int num , cnum = 0 , rev = 0 ;
    printf("Enter number : ") ;
    scanf("%d" , &num) ;
    cnum = num ;
    while(num > 0){
        rev = (rev * 10) + (num % 10) ;
        num /= 10 ;
    }
    printf("%d" , rev) ;
    if(rev == cnum){
        printf("Palindrome number\n") ;
    } else {
        printf(" Not a Palindrome number\n") ;
    }
    return 0;
}