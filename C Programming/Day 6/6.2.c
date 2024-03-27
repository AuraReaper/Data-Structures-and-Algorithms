#include <stdio.h>
#include <ctype.h>

int main(){
    char ch ;
    printf("Enter the alpahabet : ") ;
    scanf("%c" , &ch) ;
    if(isupper(ch)){
        printf("You have entered %c which is already in uppercase\n") ;
    } else{
        printf("The uppercase of the entered letter is %c " , toupper(ch)) ;
    }
    return 0 ;
}