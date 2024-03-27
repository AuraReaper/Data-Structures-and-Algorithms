#include <stdio.h>
#include <ctype.h>

int main(){
    char alpha ;
    printf("Enter an alphabet : ") ;
    scanf("%c" , &alpha) ;
    if(isalpha(alpha)){
        if(alpha == "a" || alpha == "e" || alpha == "i" || alpha == "o" || alpha == "u"
            || alpha == "A" || alpha == "E" || alpha == "I" || alpha == "O" || alpha == "U"){
                printf("The enter character %c is a vowel \n" , alpha) ;
        } else {
            printf("The enter character %c is a consonant \n" , alpha) ;
        }
    } else{
        printf("The entered character %c is not an alphabet\n") ;
    }
    return 0 ;
}